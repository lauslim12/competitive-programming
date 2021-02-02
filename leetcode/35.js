/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
  if (nums[nums.length - 1] < target) {
      return nums.length;
  }
              
  for (let i = 0; i < nums.length; i += 1) {
      if (nums[i] === target) {
          return i;
      }
      
      if (nums[i] > target) {
          if (i === 0) {
              return 0;
          }
          
          return i;
      }
  }
};