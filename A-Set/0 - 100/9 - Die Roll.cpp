#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  const int diceFaces = 6;
  int diceYakko, diceWakko, toFindFraction;
  cin >> diceYakko >> diceWakko;

  toFindFraction = max(diceYakko, diceWakko);
  toFindFraction = diceFaces - toFindFraction + 1;

  if (toFindFraction == 1) {
    cout << "1/6" << endl;
  } else if (toFindFraction == 2) {
    cout << "1/3" << endl;
  } else if (toFindFraction == 3) {
    cout << "1/2" << endl;
  } else if (toFindFraction == 4) {
    cout << "2/3" << endl;
  } else if (toFindFraction == 5) {
    cout << "5/6" << endl;
  } else if (toFindFraction == 6) {
    cout << "1/1" << endl;
  } else {
    cout << "0/1" << endl;
  }

  return 0;
}