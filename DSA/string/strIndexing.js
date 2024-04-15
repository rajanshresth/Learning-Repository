// Qn.1 What is the index of the first character in a string?
// Hint: Remember that indexing in JavaScript (and many other programming languages) starts at 0.
const str1 = "String";
console.log(str1[0]); // S
// --> index of the first character in a string is 0

// Qn.2 How do you access the third character of a string stored in a variable called str?
// Hint: You can use square brackets [] with the index inside to access a specific character.
const str2 = "Rajan";
console.log(str2[2]); // j

// QN.3 What happens if you try to access an index that is beyond the length of the string?
// Hint: JavaScript will return undefined if you try to access an index beyond the length of the string.
const str3 = "Hello";
console.log(str3[10]); // undefined

// Qn.4 How can you determine the index of the last character in a string?
// Hint: You can use the length property of the string along with indexing to find the index of the last character.
const str4 = "World";
const lastIndex = new Number(str4.length - 1);
console.log(str4[lastIndex]); // d

// Qn.5 Can you change the value of a character in a string directly by assigning a new value to its index? Why or why not?
// Hint: Think about the immutable nature of strings in JavaScript and what it means for modifying individual characters.
let str = "Hello";
str[0] = "J"; // This won't change the string, no error but no effect
console.log(str); // Output: 'Hello'
// ---> Strings in JavaScript are immutable, which means that you cannot change individual characters directly by assigning new values to their indices.
