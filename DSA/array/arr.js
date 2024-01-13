// Array- Declaration, Initialization, Insertion, Deletion, Traversal, Searching, Sorting, Merging, Reversin

let person = {
  name: "Rajan",
  age: 20,
};
let arr = ["apple", "banana", "mango", person];
// console.log(arr.length); // length of array

// arr.pop(); // remove last element
// console.log(arr); // print array

// arr.push("orange"); // add element at last
// console.log(arr); // print array

// arr.unshift("grapes"); // add element at first
// console.log(arr); // print array

// arr.shift(); // remove element at first
// console.log(arr); // print array

// Looging an array
for (let i = 0; i < arr.length; i++) {
  //   console.log(arr[i]);
}

// let i = 0;
// while (i < arr.length) {
//     console.log(arr[i]);
//   i++;
// }

// InBuild Loop method
const num = ["one", "two", " three", "four", "five"];
num.map((item, index, arr) => {
  //   console.log("Item: ", item, "Index: ", index, "Arr: ", arr[index]);
  //   if (item == 3) {
  //     console.log(index);
  //   }
  //   // arr of num 3
  //   if (item == 3) {
  //     console.log(arr);
  //   }
  //   return item*2;
});

// concat method in js
const arrC1 = [1, 2, 3, 4, 5];
const arrC2 = [6, 7, 8];
const arrC3 = arrC1.concat(arrC2);
// console.log("Contact Arr", arrC3);

const numbers = [1, 2];
const newNumbs = numbers.filter((item, index, arr) => {
  return item > 2;
});
// console.log(newNumbs);

// const newNumbs2 = numbers.reduce((acc, item, index, arr) => {
//   //   console.log(acc, item);
//   numbers.unshift(index + 1);
//   console.log(`changed ${index + 1}`, numbers);
//   numbers.pop();
//   console.log(`changed ${index - 1}`, numbers);
//   return acc + item;
// }, 0);

// some method in js
const someArr = [1, 2, 3, 4, 5];
const res = someArr.some((item, index, arr) => {
  //   console.log(item, index, arr);
  return item > 3;
});
// console.log(res);

// every method in js
const everyArr = [1, 2, 3, 4, 5];
const res2 = everyArr.every((item, index, arr) => {
  //   console.log(item, index, arr);
  return item > 0;
});

// Find method in js
const findArr = [1, 2, 3, 4, 5];
const res3 = findArr.find((item, index, arr) => {
  //   console.log(item, index, arr);
  return item > 3;
});
// console.log("res3", res3);

// Spread and Rest Operator in array
const arr1 = [1, 2, 3, 4, 5];
const arr2 = [6, 7, 8];
const arr3 = [...arr1, ...arr2];
// console.log("arr3", arr3);

function sum(...args) {
  return args;
}
// console.log(
//   sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, {
//     name: "Rajan",
//     age: 20,
//   })
// );

// Array Destructuring
const arr4 = [1, 2, 3, 4, 5];
const [a, b, c, d, e] = arr4;
// console.log(a, b, c, d, e);

// Array Destructuring with rest operator
const arr5 = [1, 2, 3, 4, 5];
const [f, g, ...h] = arr5;
// console.log(f, g, h);

// slice method in js
const arr6 = [1, 2, 3, 4, 5];
const arr7 = arr6.slice(1, 4); // slice(start, end) copy array from start to end-1 index
// console.log("arr7", arr7);

// splice method in js
const arr8 = [1, 2, 3, 4, 5];
const arr9 = arr8.splice(1, 3); // splice(start, deleteCount) delete element from start to deleteCount-1 index
// console.log("arr9", arr9);

// sort method in js
const arr10 = [1, 2, 3, 4, 5];
const arr11 = arr10.sort((a, b) => {
  return b - a;
});
// console.log("arr11", arr11);

// reverse method in js
const arr12 = [1, 2, 3, 4, 5];
const arr13 = arr12.reverse();
// console.log("arr13", arr13);

// fill method in js
const arr14 = [1, 2, 3, 4, 5];
const arr15 = arr14.fill(100, 1, 4); // fill(value, start, end) fill value from start to end-1 index
// console.log("arr15", arr15);

// findIndex method in js
const arr16 = [1, 2, 3, 4, 5];
const arr17 = arr16.findIndex((item, index, arr) => {
  return item > 3;
});
// console.log("arr17", arr17);

// indexOf method in js
const arr18 = [1, 2, 3, 4, 5];
const arr19 = arr18.indexOf(3);
// console.log("arr19", arr19);

// lastIndexOf method in js
const arr20 = [1, 2, 3, 4, 5, 6, 7, 9, 3];
const arr21 = arr20.lastIndexOf(3);
console.log("arr21", arr21);

// includes method in js
const arr22 = [1, 2, 3, 4, 5];
const arr23 = arr22.includes(3);
console.log("arr23", arr23);

// Array of Object
const arrName = [
  {
    name: "Rajan",
    age: 20,
  },
  {
    name: "Nirmika",
    age: 19,
  },
  {
    name: "Bhuwan",
    age: 17,
  },
  {
    name: "Deepak",
    age: 16,
  },
  {
    name: "Nirjal",
    age: 14,
  },
];
console.log(
  arrName
    .filter((item) => {
      if (item.age >= 18) {
        return item.name;
      }
    })
    .map((item) => {
      return item.name;
    })
);
