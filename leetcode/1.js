/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {  
  for (let i = 0; i < nums.length; i += 1) {
    for (let j = 0; j < nums.length; j += 1) {
      if (i == j) {
        continue;
      }

      if (nums[i] + nums[j] === target) {
          return [i, j];
      }
    }
  }
};