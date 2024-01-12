# Big O natation
Big O notion is used to classify algorithms according to how their running time or space requirements grow as the input size grows.

---

## Time Complexity
Time complexity is a concept in computer science that deals with the computation time taken by an algorithm to run, as a function of the size of the input to the program. It is usually expressed using Big O notation, which describes the upper bound of the time complexity in the worst-case scenario.

1. **O(1): Constant time** This means the algorithm runs in constant time relative to its input. No matter how big the list we input, it takes the same amount of time to return the result.
   ```javascript
    // 1 operations --> O(1)
   const equalNumber = (array)=>{
        for(let i=0; i<array.length;i++){
            if(i===3) return array[i]
        }
    }
   ```
2. **O(n): Linear time.** THis means the algorithm will run in linear time relative to its input. So if we input a list of length 10, it takes 10 times as long as it would with a list of length 1.
   ```javascript
    const GoingUpDown(n){
    // 2n+3 operations --> O(n)
        console.log("Going forward!");
        for(var i=0; i<n ; i++){
            console.log(i)
        }
        console.log("Going Downward!");
        for(var j=n-1;j>=0;j--){
            console.log(j)
        }
        console.log("At the start!")
    }
   ```
3. **O(n^2): Quadratic time** This means the algorithm runs in quadratic time relative to its input. With a list of length 10, it takes 100 times as a list of length 1.
   ```javascript
    function printBoth(n){
        // n*n operation --> O(n^2)
        for(var i=0;i<n;j++){
            for(var j=0;j<n;j++){
                console.log(i,j)
            }
        }
    }
    ```
4. **O(log(n)): Logarithmic time** This means that the algorithm runs in logarithmic time. This is the case when the algorithm halves the input at each step. Binary search is a classic example of a O(log(n)) algorithm. 

5. **O(N log N): Linearithmic time.** This is seen in efficient sorting algorithms like quicksort and mergesort.
---

### Space Complexity
Space complexity deals with the amount of memory(space) and algorithm needs to run. In other worlds, it measure of the amount of storage(like variables, data structures,etc.) an algorithm needs to complete.

Some common space complexities.
1. **O(1): Constant space.** The algorithm uses a fixed amount of space that does not change with the size of the input.
2. **O(n): Linear space.** The space used by the algorithm grows linearly with the size of the input. An example would be an algorithm that creates a copy of its input.
3. **O(n^2): Quadratic space.** The space used by the algorithm grows quadratically with the size of the input. This is less common but can happen, for example: with algorithms that build a matrix of size n*n
