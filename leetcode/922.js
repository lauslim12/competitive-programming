/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortArrayByParityII = function(A) {
  const oddArray = [];
  const evenArray = [];
  const ans = [];
  
  for (let i = 0; i < A.length; i += 1) {
      if (A[i] % 2 === 0) {
          evenArray.push(A[i]);
      } else {
          oddArray.push(A[i]);
      }
  }
  
  for (let i = 0; i < A.length; i += 1) {
      if (i % 2 === 0) {
          const number = evenArray.pop();
          ans.push(number);
      } else {
          const number = oddArray.pop();
          ans.push(number);
      }
  }
  
  return ans;
};