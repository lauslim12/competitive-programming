#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int testCases, numberOfElements, maximumMoves;
  cin >> testCases;

  while (testCases--) {
    cin >> numberOfElements >> maximumMoves;
    int numbersA[numberOfElements], numbersB[numberOfElements];

    for (int i = 0; i < numberOfElements; i++) {
      cin >> numbersA[i];
    }

    for (int i = 0; i < numberOfElements; i++) {
      cin >> numbersB[i];
    }

    // Sort both arrays. A should be strictly larger than B!
    sort(numbersA, numbersA + numberOfElements);
    sort(numbersB, numbersB + numberOfElements, greater<int>());

    // Compare both arrays!
    int i = 0;
    for (int j = 0; i < maximumMoves && j < numberOfElements; j++) {
      if (numbersA[i] < numbersB[i]) {
        swap(numbersA[i], numbersB[i]);
        i++;
      }
    }

    // Sum the elements of the array.
    int sum = 0;
    sum = accumulate(numbersA, numbersA + numberOfElements, sum);
    cout << sum << endl;
  }

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}