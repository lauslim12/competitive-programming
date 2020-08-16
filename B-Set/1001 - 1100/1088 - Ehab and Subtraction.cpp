#include <iostream>
#include <set>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int lengthOfArray, numberOfOperations;
  set<int> array;
  array.insert(0);

  cin >> lengthOfArray >> numberOfOperations;

  for (int i = 0; i < lengthOfArray; i++) {
    int input;
    cin >> input;
    array.insert(input);
  }

  auto it = array.begin();
  for (int i = 0; i < numberOfOperations; i++) {
    if (next(it) == array.end()) {
      cout << "0" << endl;
    } else {
      cout << *next(it) - *it << endl;
      it = next(it);
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