#include <cstring>
#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int testCases;
  cin >> testCases;

  while (testCases--) {
    string str;
    cin >> str;

    // Get first two characters of the string.
    string ans = str.substr(0, 2);

    // Check for even characters (pattern matching).
    for (int i = 0; i < str.size(); i += 2) {
      ans += str[i];
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