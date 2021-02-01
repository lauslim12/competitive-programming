/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findKthLargest = function(nums, k) {
  for (let i = 0; i < nums.length; i += 1) {
      for (let j = 0; j < nums.length; j += 1) {
          let tmp = 0;
          
          if (i === j) continue;
          
          if (nums[i] > nums[j]) {
              tmp = nums[i];
              nums[i] = nums[j];
              nums[j] = tmp;
          }
      }
  }
  
  return nums[k - 1];
};