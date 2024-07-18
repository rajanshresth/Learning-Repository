// string to numbers
let strNum = "423";
const num1 = Number(strNum);
const num2 = parseInt(strNum);
const num3 = parseFloat(strNum);
/* console.log(num1);
console.log(num2, typeof num2);
console.log(num3, typeof num3); */

// numbers to string
let numStr = 423;
const str1 = String(numStr);
const str2 = numStr.toString();
/* console.log(str1);
console.log(str2); */

// Qn1: Write a function to convert a string to a number if it's a valid number format.
const stringToNumber = (str) => {
  const num = Number(str);
  return isNaN(num) ? `Error: '${str}' is not a valid number format.` : num;
};
/*
console.log("String to number", stringToNumber("123"));
console.log(stringToNumber("45.67"));
console.log(stringToNumber("test"));
*/

//Convert a number to a string with commas as thousands separators and a fixed number of decimal places.
function formatNumber(num, decimalPlaces) {
  // Convert the number to a string with the desired decimal places
  const numStr = num.toFixed(decimalPlaces);

  // Split the number into integer and decimal parts
  const parts = numStr.split(".");

  // Add commas to the integer part
  let integerPart = parts[0];
  let integerFormatted = "";
  while (integerPart.length > 3) {
    integerFormatted = "," + integerPart.slice(-3) + integerFormatted;
    integerPart = integerPart.slice(0, -3);
  }
  integerFormatted = integerPart + integerFormatted;

  // Combine the integer and decimal parts
  return integerFormatted + (parts[1] ? "." + parts[1] : "");
}
/* 
const number = 1234567.89;
const formattedNumber = formatNumber(number, 2);
console.log(formattedNumber); // Output: "1,234,567.89" */

//Qn.3 Convert a positive integer to its Roman numeral representation.
const toRoman = (num) => {
  if (num <= 0 || num > 3999) return "Invalid number";
  const romanNumerals = [
    { value: 1000, symbol: "M" },
    { value: 900, symbol: "CM" },
    { value: 500, symbol: "D" },
    { value: 400, symbol: "CD" },
    { value: 100, symbol: "C" },
    { value: 90, symbol: "XC" },
    { value: 50, symbol: "L" },
    { value: 40, symbol: "XL" },
    { value: 10, symbol: "X" },
    { value: 9, symbol: "IX" },
    { value: 5, symbol: "V" },
    { value: 4, symbol: "IV" },
    { value: 1, symbol: "I" },
  ];
  let roman = "";
  for (let i = 0; i < romanNumerals.length; i++) {
    while (num >= romanNumerals[i].value) {
      roman += romanNumerals[i].symbol;
      num -= romanNumerals[i].value;
    }
  }
  return roman;
};
console.log(toRoman(1299));
