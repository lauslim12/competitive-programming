#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int apartments[4 * 9] = { 1, 11, 111, 1111, 
                            2, 22, 222, 2222, 
                            3, 33, 333, 3333, 
                            4, 44, 444, 4444, 
                            5, 55, 555, 5555,
                            6, 66, 666, 6666,
                            7, 77, 777, 7777,
                            8, 88, 888, 8888,
                            9, 99, 999, 9999 };
  int testCases, apartmentNumber;
  cin >> testCases;

  while(testCases--) {
    int ans = 0;
    int count = 0;

    cin >> apartmentNumber;

    for (int i = 0; i < 4 * 9; i++) {
      if (count == 4) {
        count = 0;
      }

      if (count == 0) {
        ans += 1;
      }

      if (count == 1) {
        ans += 2;
      }

      if (count == 2) {
        ans += 3;
      }

      if (count == 3) {
        ans += 4;
      }

      if (apartments[i] == apartmentNumber) {
        break;
      }

      count++;
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