#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  int numberOfRows;
  bool isSeatAvailable = false;

  cin >> numberOfRows;

  string seats[numberOfRows];

  for (int i = 0; i < numberOfRows; i++) {
    cin >> seats[i];

    // If a seat contains two adjacent 'OO', mark and mutate it.
    if (!isSeatAvailable) {
      for (int j = 0; j < seats[i].size(); j++) {
        if (seats[i][j] == 'O' && seats[i][j + 1] == 'O' && isSeatAvailable == false) {
          isSeatAvailable = true;
          seats[i][j] = '+';
          seats[i][j + 1] = '+';
        }
      }
    }
  }

  if (isSeatAvailable) {
    cout << "YES" << endl;
    for (int i = 0; i < numberOfRows; i++) {
      cout << seats[i] << endl;
    }
  } else {
    cout << "NO" << endl;
  }

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}