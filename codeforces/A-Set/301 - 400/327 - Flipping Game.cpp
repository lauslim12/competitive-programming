#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int kadane(int array[], int lengthOfArray) {
  int maxSoFar = 0, maxEndingHere = 0;

  for (int i = 0; i < lengthOfArray; i++) {
    maxEndingHere = maxEndingHere + array[i];

    if (maxSoFar < maxEndingHere) {
      maxSoFar = maxEndingHere;
    }

    if (maxEndingHere < 0) {
      maxEndingHere = 0;
    }
  }

  return maxSoFar;
}

int solve() {
  // Solution here.
  int lengthOfArray, numberOfOnes = 0;
  bool onlyOnes = true;
  cin >> lengthOfArray;
  int numbers[lengthOfArray], kadaneArray[lengthOfArray];

  for (int i = 0; i < lengthOfArray; i++) {
    cin >> numbers[i];
  }

  // If the array size is one and the content is one, then simply make it -1.
  // Because the numbers have to be flipped at least once.
  for (int i = 0; i < lengthOfArray; i++) {
    if (numbers[i] == 0) {
      onlyOnes = false;
      break;
    }
  }

  if (onlyOnes == true) {
    numberOfOnes -= 1;
  }

  // Count number of ones in the array.
  for (int i = 0; i < lengthOfArray; i++) {
    if (numbers[i] == 1) {
      numberOfOnes++;
    }
  }

  // Copy the array to be fitted with '1' and '-1' for Kadane's Algorithm.
  for (int i = 0; i < lengthOfArray; i++) {
    if (numbers[i] == 1) {
      kadaneArray[i] = -1;
    } else {
      kadaneArray[i] = 1;
    }
  }

  // Kadane's Algorithm.
  int maxSoFar = kadane(kadaneArray, lengthOfArray);

  // Calculate the answer!
  int ans = maxSoFar + numberOfOnes;
  cout << ans << endl;
  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}