#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int stops, initial, exit, enter, ans = 0, tmp = 0;
  cin >> stops;

  for(int i = 0; i < stops; i++) {
    if(i == 0) {
      cin >> initial >> enter;
      tmp = initial + enter;
    }
    else {
      cin >> exit >> enter;
      tmp = (tmp - exit + enter);
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;

  return 0;
}