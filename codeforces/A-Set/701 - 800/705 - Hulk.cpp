#include <iostream>
#include <string>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int main() {
  IOS;
  int feelings;
  string ans, love = "I love", hate = "I hate";
  cin >> feelings;

  for (int i = 1; i <= feelings; i++) {
    if (i % 2 == 1) {
      ans += hate;
    } else if (i % 2 == 0) {
      ans += love;
    }

    if (i != feelings) {
      ans += " that ";
    } else {
      ans += " it ";
    }
  }

  cout << ans << endl;

  return 0;
}