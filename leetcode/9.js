/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  if (x < 0) {
      return false;
  }
  
  const converted = x.toString();
  const reversed = [...converted].reverse().join("");
  
  if (converted === reversed) {
      return true;
  }
  
  return false;
};