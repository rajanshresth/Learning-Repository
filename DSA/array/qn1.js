// Q1- Second largest number in an array
// Given an array Arr of size N, print second largest element from an array.
// distinct elements from the array.

// Input: [12, 35, 1, 10, 34, 1] ---->>> Output: 34
// Input: [10, 5, 10] ---->>> Output: 5
// Input: [10, 10, 10] ---->>> Output: -1
// Input: [3, 3, 4, 4, 4, 4, 4, 4] ---->>> Output: -1

function secondLargest(arr) {
  const uniqueArr = Array.from(new Set(arr)); // O(n)
  uniqueArr.sort((a, b) => {
    // O(nlogn)
    return b - a;
  });
  //   console.log(uniqueArr);
  if (uniqueArr.length >= 2) {
    return uniqueArr[1];
  } else {
    return -1;
  }
}
console.log(secondLargest([12, 35, 1, 10, 34, 1]));
console.log(secondLargest([10, 5, 10]));
console.log(secondLargest([10, 10, 10]));

function secondLargest2(arr) {
  let largest = Number.NEGATIVE_INFINITY;
  let secondLargest = Number.NEGATIVE_INFINITY;
  for (let i = 0; arr.length; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
      secondLargest = largest;
    } else if (arr[i] != largest && arr[i] > secondLargest) {
       secondLargest = arr[i];
    }
  }
  return secondLargest;
}
const sec = secondLargest2([12, 35, 1, 10, 34, 1]);
console.log("sec", sec);
