/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
  if (n === 0) {
    return 0;
  }

  if (n === 1) {
    return 1;
  }

  const numbers = [0, 1];

  for (let i = 2; i < n; i += 1) {
    const nextFibonnaciNumber = numbers[i - 1] + numbers[i - 2];
    numbers.push(nextFibonnaciNumber);
  }

  return numbers[n - 1] + numbers[n - 2];
};