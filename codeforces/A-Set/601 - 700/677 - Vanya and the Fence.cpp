#include <iostream>
using namespace std;

int main() {
  int numberOfFriends, fenceHeight, ans = 0, friendHeight;
  cin >> numberOfFriends >> fenceHeight;

  while(numberOfFriends--) {
    cin >> friendHeight;

    if(friendHeight > fenceHeight) {
      ans += 2;
    }
    else {
      ans += 1;
    }
  }

  cout << ans << endl;

  return 0;
}