#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int ctr = 0, months = 12, ans = 0, acc = 0;
  int minimumHeight, heightIncrease[13];
  cin >> minimumHeight;

  for (int i = 0; i < months; i++) {
    cin >> heightIncrease[i];
  }

  sort(heightIncrease, heightIncrease + months, greater<>());

  while (acc < minimumHeight) {
    if (ctr >= months && acc < minimumHeight) {
      ans = -1;
      break;
    }
    acc += heightIncrease[ctr];
    ans++;
    ctr++;
  }

  cout << ans;

  return 0;
}