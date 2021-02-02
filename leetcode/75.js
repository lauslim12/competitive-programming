/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
  for (let i = 0; i < nums.length; i += 1) {
      for (let j = 0; j < nums.length - i - 1; j += 1) {
          if (nums[j] > nums[j + 1]) {
              [nums[j], nums[j + 1]] = [nums[j + 1], nums[j]];
          }
      }
  }
};