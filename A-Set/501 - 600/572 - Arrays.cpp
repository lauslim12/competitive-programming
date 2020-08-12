#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

void solve() {
  int sizeA, sizeB;
  int chosenElementsA, chosenElementsB;

  cin >> sizeA >> sizeB;
  cin >> chosenElementsA >> chosenElementsB;

  int arrayA[sizeA], arrayB[sizeB];

  for (int i = 0; i < sizeA; i++) {
    cin >> arrayA[i];
  }

  for (int i = 0; i < sizeB; i++) {
    cin >> arrayB[i];
  }

  if (arrayA[chosenElementsA - 1] < arrayB[sizeB - chosenElementsB]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}