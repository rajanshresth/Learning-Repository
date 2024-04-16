// How can you determine the index of the last character in a string?
// Hint: You can use the length property of the string along with indexing to find the index of the last character.
const str4 = "World";
const lastIndex = new Number(str4.length - 1);
console.log(str4[lastIndex]); // d

// Reverse a String:
// Write a function that takes a string as input and returns the string reversed. For example:
// Input: "hello"
// Output: "olleh"
function reverseStr(string) {
  return x < 0 ? false : string.split("").reverse().join("");
}
console.log(reverseStr("hello")); // Output: "olleh"

// Count the Number of Vowels:
// Write a function that takes a string as input and returns the number of vowels (a, e, i, o, u) in the string. For example:
// Input: "hello"
// Output: 2
function countVowels(str) {
  if (str.length < 0) return false;
  const vowels = "aeiouAEIOU";
  let count = 0;
  for (let i = 0; i < str.length; i++) {
    if (vowels.includes(str[i])) {
      count++;
    }
  }
  return count;
}
console.log(countVowels);
console.log(countVowels("hello")); // Output: 2
console.log(countVowels("wOrld")); // Output: 1

// Check for Palindrome:
// Write a function that takes a string as input and returns true if the string is a palindrome (reads the same forwards and backwards), and false otherwise. For example:
// Input: "radar"
// Output: true
function isPalindrome(str) {
  if (str.length < 0) return false;
  const reversedStr = str.split("").reverse().join("");
  if (str === reversedStr) {
    return true;
  } else {
    return false;
  }
}
console.log(isPalindrome("radar")); // Output: true

// Find the Longest Word:
// Write a function that takes a string as input and returns the length of the longest word in the string. For example:
// Input: "The quick brown fox jumps over the lazy dog"
// Output: 6 (for the word "jumps")
function longestWordLength(str) {
  if (str.length < 0) return false;
  const words = str.split(" ");
  let maxLength = new String("");
  for (let i = 0; i < words.length; i++) {
    const word = words[i];
    if (word.length > maxLength.length) {
      maxLength = word;
    }
  }
  return maxLength;
}
console.log(longestWordLength("The quick brown fox jumps over the lazy dog"));

// Count the Occurrences of a Substring:
// Write a function that takes a string and a substring as input and returns the number of times the substring appears in the string. For example:
// Input: "hellohellohello", "ll"
// Output: 3
function countSubstring(str, subStr) {
  if (str.length < 0 || subStr.length < 0) return false;

  let count = 0;
  let index = str.indexOf(subStr);
  while (index !== -1) {
    count++;
    index = str.indexOf(subStr, index + 1);
  }
  return count;
}
console.log(countSubstring("hellohellohello", "ll")); // Output: 3

// Write a function to determine if two strings are anagrams of each other. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
// For example:
// "listen" and "silent" are anagrams.
// "hello" and "world" are not anagrams.
// Your function should take two strings as input and return true if they are anagrams, and false otherwise.
function areAnagrams(str1, str2) {
  if (str1.length < 0 || str2.length < 0) return false;
  if (str1.length !== str2.length) {
    return false;
  }
  const sortedStr1 = str1.split("").sort().join("");
  const sortedStr2 = str2.split("").sort().join("");
  return sortedStr1 === sortedStr2;
}
console.log("Anagrams:");
console.log(areAnagrams("listen", "silent")); // Output: true
console.log(areAnagrams("hello", "world")); // Output: false
