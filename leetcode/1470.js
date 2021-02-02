/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
  const array1 = [];
  const array2 = [];
  const ans = [];
  
  for (let i = 0; i < n; i += 1) {
      array1.push(nums[i]);
  }
  
  for (let i = n; i < nums.length; i += 1) {
      array2.push(nums[i]);
  }
  
  let i = 0, j = 0;
  let isLeft = true;
  
  while (ans.length !== nums.length) {
      if (isLeft === true) {
          ans.push(array1[i]);
          isLeft = false;
          i += 1;
      } else {
          ans.push(array2[j]);
          isLeft = true;
          j += 1;
      }
  }
  
  return ans;
};