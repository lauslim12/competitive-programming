/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {
  const newStr = [...(n >>> 0).toString(2)];
  let ans = 0;
  
  for (let i = 0; i < newStr.length; i += 1) {
      if (newStr[i] === '1') {
          ans += 1;
      }
  }
  
  return ans;
};