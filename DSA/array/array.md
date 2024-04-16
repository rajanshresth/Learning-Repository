# Array
An **Array** is a **Non-primitive data  types (i.e derived from Primitive data types)** or **Object Datatype.**
```javascript
const fruits = ["Banana", "Orange", "Apple", "Mango"];
const number = [1,2,3,4];
```
You can access the value of an array by referring the index of an index number. The first element of an array has index of 0.

To access an element of an array, you can use the following syntax:

```javascript
const cars = ["Saab", "Volvo", "BMW"];
let car = cars[0]; // car is "Saab"
```

You can change the value of an element in an array by assigning a new value to it:

```javascript
const cars = ["Saab", "Volvo", "BMW"];
cars[0] = "Opel"; // cars is now ["Opel", "Volvo", "BMW"]
```

You can convert an array to a string using the `toString()` method:

```javascript
const fruits = ["Banana", "Orange", "Apple", "Mango"];
let fruitString = fruits.toString(); // fruitString is "Banana,Orange,Apple,Mango"
```
---

## Array Method
JavaScript provides a variety of array methods that allow you to manipulate arrays efficiently. Here are some commonly used array methods in JavaScript:
1. `push()`: Adds one or more than one elements to the end of an array and returns the new length.
   ```javascript
    let fruits = ["apple","banana"];
    fruits.push('orange');
    // ["apple","banana", "orange"]
   ```
2. `pop()`: Removes the last element from an array and returns that element.
   ```javascript
    let fruits = ['apple','banana'];
    let lastFruit = fruits.pop();
    console.log(lastFruit);
   ```
3. `shift()`: Removes the first element from an array and returns that element.
    ```javascript
    let fruits = ['apple', 'banana', 'orange'];
    let firstFruit = fruits.shift();
    // firstFruit is 'apple', fruits is now ['banana', 'orange']
    ```
4. `unshift()`: Adds one or more elements to the beginning of an array and return the new length.
    ```javascript 
    let fruits = ['banana', 'orange'];
    fruits.unshift('apple');
    // fruits is now ['apple', 'banana', 'orange']
    ```
5. `concat()`: Joins two or more arrays and returns a new array.
   ```javascript
    let fruits = ['apple', 'banana'];
    let moreFruits = ['orange', 'grape'];
    let allFruits = fruits.concat(moreFruits);
    // allFruits is ['apple', 'banana', 'orange', 'grape']
   ```
6. `slice()`: Returns a shallow of a portion of an array.
   ```javascript
    let fruits = ['apple', 'banana', 'orange', 'grape'];
    let slicedFruits = fruits.slice(1, 3);
    // slicedFruits is ['banana', 'orange'], fruits is unchanged
   ``` 
7. `splice()`: Changes the contents of an array by removing or replacing existing elements and/or adding new elements in place.
   ```javascript
    let fruits = ['apple', 'banana', 'orange'];
    fruits.splice(1, 1, 'grape', 'kiwi');
    // fruits is now ['apple', 'grape', 'kiwi', 'orange']
   ```
8. `indexOf()` & `lastIndexOf`: Returns the index of the first/last occurrence of specified element in an array.
   ```javascript
    let fruits = ['apple', 'banana', 'orange', 'banana'];
    let indexOfBanana = fruits.indexOf('banana'); // 1
    let lastIndexOfBanana = fruits.lastIndexOf('banana'); // 3
   ``` 
9.  `forEach()`: Calls a function once for each element in an array, in order.
    ```javascript
    let numbers = [1, 2, 3, 4];
    numbers.forEach(function (num) {
        console.log(num);
    });
    // Output: 1, 2, 3, 4
    ``` 
10. `map`: Transform elements of an array into a new array based on a provided callback function
    1.  `Syntax`: The `map` method is called on an array and takes a callback function as its argument. The callback function is called for each element of the array and has three parameters. The current element being processed, the index of the current element, and the array itself.
      ```javascript
         const newArray = array.map(callback(currentValue,index, array));
      ```
      2. `Callback Function`: The callback function recieves three arguments:
      --> `currentValue`: The current element being processed in the array.
      --> `index(optional)`: The index of the current element being processed. 
      --> `array(optional)`: The array that `map` was called upon.
      3. `Return Value`: The `map` method returns a new array with the results of calling the provided callback function on each element of the original array. It does not mutate the original array.
      ```javascript
         const numbers= [1,2,3,4,5];
         const doubledNumbers = numbers.map((num)=>num*2)
         console.log(doubledNumers);
      ```
11. `filter`: create a new array with all elements that pass a test implemented by the provided callback function. It iterates over each element of the array and includes only those elements for which the callback function returns true.
    1.  `Syntax`: The `filter` method is called on an array and takes a callback function as its argument.
    2.  `Callback function`: The callback function provided to `filter` takes three arguments: 
        1.  `element`: THe current elements being processed in the array.
        2.  `index(optional)`: The index of the current element being processed.
        3.  `array(optional)`: The array that `filters` was called upon.
    3. `Return Value`: The `filter` method returns a new array containing only the elements for which the callback function returns true.
    ```javascript
         const numbers = [1,2,3,4,5];
         const evenNumbers = numbers.filter((num)=>num%2===0);
         console.log(evenNumbers); //output: [2,4]
   ```
12. `reduce`: reduce the elements of an array into a single value, such as number, string, or object. It executes a provided callback function once for each element in the array, resulting in a single output value.
      1. `syntax`: The `reduce` method is called on an array and takes a callback function as its first argument. It can optionally take an initial value as the second argument.
         ```javascript
            const result = array.reduce(callback(accumulator, currentValue, index, array),initialValue);
         ```
      2. `callback function`: The callback function provided to `reduce` takes four arguments:
         1. `accumulator`: The accumulator accumulates the callback's return values. It is the accumulated value previously returned in the last invocation of the callback, or the `initalValue` if provided.
         2. `currentValue`: The current element being processed in the array.
         3. `index(optional)`: The index of the current element being processed.
         4. `array(optional)`: The array that `reduce` was called upon.
      3. `Initial Value`: The `initalValue` parameter is optional. If provided, it is used as the initial value of the accumulator. If not provided, the first element of the array is used as the initial value, and itertion starts from the second element.
      4. `Return Value`: The `reduce` method returns the accumulated value after iterting through all elements of the array.

   ```javascript
      const numbers = [1,2,3,4,5];
      const sum = numbers.reduce((accumulator, currentValue)=>accumulator +currentValue,0);
      console.log(sum); //Output: 15
   ```