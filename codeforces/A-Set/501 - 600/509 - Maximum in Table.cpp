#include <iostream>
#include <string.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int n, sumOfNumbers = 0;

  cin >> n;

  int table[n][n];

  // Fill the table with leading ones.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      table[i][j] = 1;
    }
  }

  // Fill the second to n row.
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      sumOfNumbers += table[i - 1][j] + table[i][j - 1];
      table[i][j] = sumOfNumbers;
      sumOfNumbers = 0;
    }
  }

  // Print.
  cout << table[n - 1][n - 1] << endl;

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}