import { launch } from "puppeteer";

(async () => {
  const browser = await launch({
    headless: false,
    defaultViewport: null,
    userDataDir: "./temp",
  });

  const page = await browser.newPage();

  // Set a user agent
  await page.setUserAgent(
    "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36"
  );

  await page.goto(
    "https://www.amazon.com/s?rh=n%3A16225007011&fs=true&ref=lp_16225007011_sar",
    { waitUntil: "domcontentloaded" }
  );

  await page.waitForSelector(
    "div.s-main-slot.s-result-list.s-search-results.sg-row"
  );

  const productHandles = await page.$$(
    "div.s-main-slot.s-result-list.s-search-results.sg-row > div"
  );

  if (productHandles.length === 0) {
    console.log("No products found");
    await browser.close();
    return;
  }

  const items = [];
  for (const [index, productHandle] of productHandles.entries()) {
    let title = "Null";
    let price = "Null";
    let img = "Null";
    let rating = "Null";

    try {
      title = await productHandle.$eval("h2 > span, h2 > a > span", (el) =>
        el.textContent.trim()
      );
    } catch (error) {
      console.log(
        `Error extracting title for product at index ${index}:`,
        error.message
      );
    }

    try {
      price = await productHandle.$eval(
        "span.a-price > span.a-offscreen",
        (el) => el.textContent.trim()
      );
    } catch (error) {
      console.log(
        `Error extracting price for product at index ${index}:`,
        error.message
      );
    }

    try {
      img = await productHandle.$eval("img.s-image", (el) =>
        el.getAttribute("src")
      );
    } catch (error) {
      console.log(
        `Error extracting image for product at index ${index}:`,
        error.message
      );
    }

    try {
      rating = await productHandle.$eval("span.a-icon-alt", (el) =>
        el.textContent.trim()
      );
    } catch (error) {
      console.log(
        `Error extracting rating for product at index ${index}:`,
        error.message
      );
    }

    // Improved validation
    if (
      title !== "Null" &&
      price !== "Null" &&
      img !== "Null" &&
      rating !== "Null" &&
      price !== "$0.00"
    ) {
      items.push({ title, price, img, rating });
    }
  }


  console.log(items);
  await browser.close();
})();
