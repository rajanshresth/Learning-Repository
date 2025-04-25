const puppeteer = require("puppeteer");
const fs = require("fs");
const path = require("path");

(async () => {
  const browser = await puppeteer.launch({
    headless: false,
    defaultViewport: null,
    userDataDir: "./temp",
  });

  const page = await browser.newPage();

  await page.setUserAgent(
    "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36"
  );

  await page.goto(
    "https://www.amazon.com/s?rh=n%3A16225007011&fs=true&ref=lp_16225007011_sar",
    { waitUntil: "domcontentloaded" }
  );

  // Define CSV file path
  const csvFilePath = path.join(__dirname, "scraped_data.csv");

  // Write CSV header
  fs.writeFileSync(csvFilePath, "Title,Price,Image,Rating\n", "utf8");

  while (true) {
    // Wait for product listing
    await page.waitForSelector(
      "div.s-main-slot.s-result-list.s-search-results.sg-row"
    );

    const productHandles = await page.$$(
      "div.s-main-slot.s-result-list.s-search-results.sg-row > div"
    );

    for (const productHandle of productHandles) {
      let title = "Null";
      let price = "Null";
      let img = "Null";
      let rating = "Null";

      try {
        title = await productHandle.$eval("h2 > span, h2 > a > span", (el) =>
          el.textContent.trim()
        );
      } catch {}

      try {
        price = await productHandle.$eval(
          "span.a-price > span.a-offscreen",
          (el) => el.textContent.trim()
        );
      } catch {}

      try {
        img = await productHandle.$eval("img.s-image", (el) =>
          el.getAttribute("src")
        );
      } catch {}

      try {
        rating = await productHandle.$eval("span.a-icon-alt", (el) =>
          el.textContent.trim()
        );
      } catch {}

      if (title !== "Null" && price !== "Null") {
        // Append data to CSV file
        const csvRow = `"${title.replace(/"/g, '""')}","${price.replace(
          /"/g,
          '""'
        )}","${img}","${rating.replace(/"/g, '""')}"\n`;
        fs.appendFileSync(csvFilePath, csvRow, "utf8");
      }
    }

    console.log(`Scraped products added to ${csvFilePath}.`);

    // Check if the "Next" button is disabled
    const isDisabled = await page.evaluate(() => {
      const lastButton = document.querySelector(
        ".s-pagination-item.s-pagination-next.s-pagination-disabled"
      );
      return lastButton;
    });

    if (isDisabled) {
      console.log("Reached the last page.");
      break;
    }

    // Navigate to the next page
    try {
      console.log("Navigating to the next page...");
      await Promise.all([
        page.click(".s-pagination-item.s-pagination-next"),
        page.waitForNavigation({ waitUntil: "domcontentloaded" }),
      ]);
    } catch (error) {
      console.log("Error navigating to the next page:", error.message);
      break;
    }

    // Add delay to mimic human interaction
    await new Promise((resolve) => setTimeout(resolve, 5000));
  }

  console.log(`Scraping complete. Data saved to ${csvFilePath}.`);
  await browser.close();
})();
