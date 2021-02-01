#include <iostream>
#include <map>
using namespace std;

int main() {
  int testCases, evenCount = 0, oddCount = 0;
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> testCases;
  int numbers[testCases];

  for (int i = 0; i < testCases; i++) {
    cin >> numbers[i];

    if (numbers[i] % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }

  if (oddCount > evenCount) {
    for (int i = 0; i < testCases; i++) {
      if (numbers[i] % 2 == 0) {
        cout << i + 1 << endl;
        return 0;
      }
    }
  } else {
    for (int i = 0; i < testCases; i++) {
      if (numbers[i] % 2 != 0) {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}