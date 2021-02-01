#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int main() {
  IOS;
  int numberOfPersons, ans = 0;
  cin >> numberOfPersons;

  for (int i = 1; i <= numberOfPersons / 2; i++) {
    if (numberOfPersons % i == 0) ans++;
  }

  cout << ans << endl;

  return 0;
}