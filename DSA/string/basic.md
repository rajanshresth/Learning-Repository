# **String in JavaScript**
In JavaScript, string is a sequence of characters enclosed within single('') or double(") quotes.
Here's a simple example:
```javascript
    let greeting = "Hello,world!"
```
In this example, `Hello, world` is a string assigned to the variable `greating`. String can contain letters, numbers, symbols, and even special characters like newline`(\n)` or tab`(\t)`.

### Immutable nature of string in Javascript
In JavaScript, strings are immutable, which means that once a string created, its content cannot be changed. Here's a breakdown of what this means

1. **Cannot be Modified**: Once a string is created, you cannot change the value of individual characters within that string. For example, if you have a string `'hello'`, you cannot change the first character `'h'` to `'H'` directly.
   ```javascript
    let str = 'hello';
    str[0] = 'H'; // This won't change the string, no error but no effect
    console.log(str); // Outputs: 'hello'
   ```
2. **Creating a New String**: Any operation that appears to modify a string actually creates a new string with the modified content. For example, if you want to change `'hello'` to `'Hello'`, you need to create a new string with desired modification.
   ```javascript
    let str='hello';
    let newStr=str.replace('h','H');
    console.log(newStr); // Outputs: 'Hello'
   ```
3. **Memory Effieciency**: While this immutability might seemt ineffiecient, it can lead to memory optimizations. Since strings are immutable, We can optimize memory usage by reusing existing string when possible, expecially when multiple variables reference the same string value.
4. **Immutable Operations**: Methods that appear to modify string actually return a new strings without modifying the original. This methods include `replace()`, `toLowerCase()`,`concat()`,etc.
   ```javascript
    let str = 'hello';
    let newStr = str.toUpperCase();
    console.log(str);
    console.log(newStr);
   ```
### Indexing
Indexing in JavaScript strings allows you to access individual characters within a string by their position(index). Indices start at 0 for the first character and increment by 1 for each subsequent charcter.
```javascript
    let str = "Hello, world!';
    console.log(str[0]); // Output: 'H'
    console.log(str[7]); // Output: 'w'
    console.log(str[str.length-1]);
```
### Iterating
Iterating over a string involves traversing each character of the string, typically using loops like `for` or `forEach`.

```javascript
    // Using for loop
    let str = 'Hello';
    for(let i=0;i<str.length;i++){
        console.log(str[i])
    }
    // Output:
    // 'H'
    // 'e'
    // 'l'
    // 'l'
    // 'o'
```
```javascript
    //using forEach loop
    let str = "World";
    str.split('').forEach(character=>{
        console.log(character);
    })
    // Output:
    // 'W'
    // 'o'
    // 'r'
    // 'l'
    // 'd'
```
### Concatenation
Concatenation involves combining multiple strings into a single string.
```javascript
    let str1 = 'Hello';
    let str2 = 'World';
    let result = str1+','+str2+'!';
    console.log(result); // Output: 'Hello, World!'
```

### Substring Extraction
Substring extraction allows you to extract a portion of a string based on its indices.
```javascript
    let str = "JavaScript";
    let subStr1 = str.substring(4); //From index 4 to end
    let subStr2 = str.substring(0,4); // From index 0 to 3
    console.log(subStr1);
    console.log(subStr2);
```
## String Method 
1. `charAt(index)`: Returns the character at the specified index.
   ```javascript
        const str = "Hello";
        console.log(str.charAt(0)); // Output: H
    ```
2. `concat(str1,str2,...)`: Joins two or more strings and returns a new string.
    ```javascript
        const str1 = "Hello";
        const str2 = "World";
        console.log(str1.concat(" ", str2)); // Output: Hello World
    ```
3. `indexOf(substring,fromIndex)`: Returns the index within the calling String object of the first occurance of the specified value, starting the search at fromIndex.
   ```javascript
        const str = "Hello World";
        console.log(str.indexOf("o")); // Output: 4
    ```
4. `lastIndexOf(substring,fromIndex)`: Returns the index within the calling String object of the last occurrence of the specified value, optionally starting the search at fromIndex.
   ```javascript
        const str = "Hello World";
        console.log(str.lastIndexOf("o")); // Output: 7
    ```
5. `slice(startIndex, endIndex)`: Extracts a section of a string and returns it as a new string.
   ```javascript
        const str = "Hello World";
        console.log(str.slice(6, 11)); // Output: World
    ```
6. `substring(startIndex, endIndex)`: Returns the part of the string between the start and end indexe, or to the end of the string.
   ```javascript
        const str = "Hello World";
        console.log(str.substring(6, 11)); // Output: World
    ```
7. `toLowerCase()`: Converts all the characters in a string to lowercase.
   ```javascript
        const str = "Hello World";
        console.log(str.toLowerCase()); // Output: hello world
    ```
8. `toUpperCase()`: Converts all the characters in a string to uppercase.
   ```javascript
        const str = "Hello World";
        console.log(str.toUpperCase()); // Output: HELLO WORLD
   ```
9.  `trim()`: Removes whitespace from both ends of  a string
    ```javascript
        const str = "   Hello World   ";
        console.log(str.trim()); // Output: Hello World
    ```
10. `replace(searchValue,newValue)`: Search for specified substring or regular expression pattern in a string, and then replace the found substring or pattern with a new substring or the result of a function.
    ```javascript
        // 1. Replacing a SubString:
        const str = "Hello World";
        const newStr = str.replace("World", "Universe");
        console.log(newStr); // Output: Hello Universe
    ```
    ```javascript
        // 2. Replacing with Regular Expression:
        const str = "apple, orange, banana, apple";
        const newStr = str.replace(/apple/g, "pear");
        console.log(newStr); // Output: pear, orange, banana, pear
    ```
    ```javascript
        // 3. Using a Function for Replacement:
        const str = "Hello World";
        const newStr = str.replace(/Hello/, function(match) {
            return "Goodbye";
        });
        console.log(newStr); // Output: Goodbye World
    ```
11. `replaceAll(searchValue,newValue)`: replaces all occurences of a specified substring or regular expression pattern with a new substring or the result of a function.
12. `charCodeAt(index)`: Returns the ASCII code of the character at the specified index
    ```javascript
        const str = "Hello";
        console.log(str.charCodeAt(0)); // Output: 72
    ```
13. `localeCompare(str)`: compare two strings in a locale-sensitive manner. It returns a number indicating whether the reference string comes before, after, or is the same as the given string in sort order.
    ```javascript
        const str1 = "apple";
        const str2 = "banana";

        console.log(str1.localeCompare(str2)); // Output: -1
        console.log(str2.localeCompare(str1)); // Output: 1
        console.log(str1.localeCompare(str1)); // Output: 0
    ```
14. `includes(searchString [, position])`: determine whether a string contains another string within it. It returns `true` if the string contains the specified substring, and `false` otherwise.
    ```javascript
        const str = "Hello World";
        
        console.log(str.includes("Hello")); // Output: true
        console.log(str.includes("hello")); // Output: false (case-sensitive)
        console.log(str.includes("World")); // Output: true
        console.log(str.includes("world")); // Output: false (case-sensitive)
    ```
