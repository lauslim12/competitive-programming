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
  int tvForSale, tvCanCarry, ans = 0;
  cin >> tvForSale >> tvCanCarry;
  int tv[tvForSale];

  for (int i = 0; i < tvForSale; i++) {
    cin >> tv[i];
  }

  sort(tv, tv + tvForSale);

  for (int i = 0; i < tvCanCarry; i++) {
    if (tv[i] > 0) {
      break;
    }

    ans += abs(tv[i]);
  }

  cout << ans << endl;

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}