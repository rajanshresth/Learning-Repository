// 1. Reverse an Array:
// Write a function that takes an array as input and returns the array reversed. For example:
// Input: [1, 2, 3, 4, 5]
// Output: [5, 4, 3, 2, 1]
function reverseArr(arr) {
  return arr.reverse();
}

// 2. Rotate an Array:
// Write a function that takes an array and an integer as input and rotates the array to the right by that number of steps. For example:
// Input: [1, 2, 3, 4, 5], 2
// Output: [4, 5, 1, 2, 3]
function rotateArr(arr, steps) {
  return arr.slice(-steps).concat(arr.slice(0, -steps));
}

// 3. Shuffle an Array:
// Write a function that takes an array as input and shuffles the array. For example:
// Input: [1, 2, 3, 4, 5]
// Output: [3, 5, 1, 2, 4]
function shuffleArr(arr) {
  return arr.sort(() => Math.random() - 0.5);
}

// 4. Randomization of an Array:
// Write a function that takes an array as input and returns a random element from the array. For example:
// Input: [1, 2, 3, 4, 5]
// Output: 3
function randomElement(arr) {
  return arr[Math.floor(Math.random() * arr.length)];
}
