#include <iostream>
using namespace std;

int main() {
  int costOfBanana, money, numberOfBananas, totalCost = 0, ans;
  cin >> costOfBanana >> money >> numberOfBananas;

  for(int i = 1; i <= numberOfBananas; i++) {
    totalCost += costOfBanana * i;
  }

  if(totalCost <= money) {
    ans = 0;
  }
  else {
    ans = totalCost - money;
  }
  
  cout << ans << endl;

  return 0;
}