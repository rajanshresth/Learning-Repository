// Q3- Remove duplicates from an array
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
// The relative order of the elements should be kept the same.
//
// Input: nums = [1,1,2] --->> Output: 2, nums = [1,2]
// Input: nums = [0,0,1,1,1,2,2,3,3,4] --->> Output: 5, nums = [0,1,2,3,4]

function removeDuplicates(nums) {
  for (let i = 0; i < nums.length - 1; i++) {
    if (nums[i] === nums[i + 1]) {
      nums.splice(i, 1);
      i--;
    }
  }
  return nums;
}
console.log(removeDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));

// Without using splice
function removeDuplicatesUnsorted(nums) {
  let seen = new Set();
  let result = [];

  for (let num of nums) {
    if (!seen.has(num)) {
      seen.add(num);
      result.push(num);
    }
  }

  return result;
}

console.log("unsorted", removeDuplicatesUnsorted([4, 2, 1, 3, 2, 1, 4, 5]));

function removeDuplicates2(nums) {
  if (nums.length === 0) return nums;

  let uniqueCount = 1; // Number of unique elements

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] !== nums[i - 1]) {
      nums[uniqueCount] = nums[i];
      uniqueCount++;
    }
  }

  // Truncate the array to remove duplicates
  nums.length = uniqueCount;

  return nums;
}

console.log("without", removeDuplicates2([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]));
console.log("without", removeDuplicates2([101, 101, 200, 300, 300, 302]));
