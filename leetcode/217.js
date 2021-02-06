/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
  const myNumbers = new Set();
  
  for (let i = 0; i < nums.length - 1; i += 1) {
      if (myNumbers.has(nums[i])) {
          return true;
      }
      
      myNumbers.add(nums[i]);
  }
  
  return false;
};