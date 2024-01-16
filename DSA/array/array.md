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
    // ["apple","banana", "orange]
   ```
2. `pop()`: Removes the last element from an array and returns that element.
   ```javascript
    let fruits = ['apple','banana'];
    let lastFruit = fruits.pop();
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