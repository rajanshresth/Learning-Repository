let str = "Hello, world";
const arr = str.split(",");
console.log(arr);

let arr1 = ["hello", "world"];
let str1 = arr.join(" "); // "hello world"
console.log(str1);

function parseCSV(csvString, separator = ",", quoteChar = '"') {
  const lines = csvString.split("\n");
  const result = [];

  for (let i = 0; i < lines.length; i++) {
    const row = [];
    let current = "";
    let inQuote = false;

    for (let j = 0; j < lines[i].length; j++) {
      const char = lines[i][j];

      if (char === quoteChar) {
        inQuote = !inQuote;
      } else if (char === separator && !inQuote) {
        row.push(current.trim());
        current = "";
      } else {
        current += char;
      }
    }

    // Push the last value
    row.push(current.trim());
    result.push(row);
  }

  return result;
}

// Example usage:
const csvData = `"Column 1","Column 2","Column 3"\n123,"This is a ""quoted"" value",456\n"a,b,c",789,1011\n"This is a long ""quoted"" value",1213,1415`;
const parsedData = parseCSV(csvData);
console.log(parsedData);
