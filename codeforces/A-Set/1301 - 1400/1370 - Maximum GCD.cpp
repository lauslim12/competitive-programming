#include <algorithm>
#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int main() {
  IOS;
  int testCases, ans = 0;
  cin >> testCases;

  while (testCases--) {
    int integer;
    cin >> integer;
    cout << integer / 2 << endl;
  }

  return 0;
}