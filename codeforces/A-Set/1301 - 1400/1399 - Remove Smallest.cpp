#include <algorithm>
#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int testCases, lengthOfArray;

  cin >> testCases;

  while(testCases--) {
    cin >> lengthOfArray;
    int numbers[lengthOfArray];
    int copy[lengthOfArray];
    int occurences = 0;

    for (int i = 0; i < lengthOfArray; i++) {
      cin >> numbers[i];
    }

    sort(numbers, numbers + lengthOfArray);

    for (int i = 0; i < lengthOfArray; i++) {
      copy[i] = numbers[i];
    }

    for (int i = 0; i < lengthOfArray - 1; i++) {
      if (abs(numbers[i] - numbers[i + 1]) <= 1) {
        copy[i] = -1;
      }
    }

    for (int i = 0; i < lengthOfArray; i++) {
      if (copy[i] != -1) {
        occurences++;
      }
    }

    if (occurences <= 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}