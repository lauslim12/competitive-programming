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
  int numberOfAthletes, testCases;
  int ans;

  cin >> testCases;

  while (testCases--) {
    ans = 1001;
    cin >> numberOfAthletes;
    
    int athletes[numberOfAthletes];

    for (int i = 0; i < numberOfAthletes; i++) {
      cin >> athletes[i];
    }

    sort(athletes, athletes + numberOfAthletes);

    for (int i = 0; i < numberOfAthletes - 1; i++) {
      int minimum = abs(athletes[i] - athletes[i + 1]);
      ans = min(ans, minimum);
    }

    cout << ans << endl;
  }

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}