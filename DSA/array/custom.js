// custom push method
let pushArr = (arr, ...elements) => {
  for (let i = 0; i < elements.length; i++) {
    arr[arr.length] = elements[i];
  }
  return arr;
};
console.log(pushArr([], "mango", "orange")); // ["mango", "orange"]
