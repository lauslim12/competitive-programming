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
  int numberOfCoins, totalCoins = 0, coinsTaken = 0, numberOfCoinsTaken = 0;
  cin >> numberOfCoins;
  int coins[numberOfCoins];

  for (int i = 0; i < numberOfCoins; i++) {
    cin >> coins[i];
    totalCoins += coins[i];
  }

  sort(coins, coins + numberOfCoins, greater<int>());

  for (int i = 0; i < numberOfCoins; i++) {
    if (coinsTaken <= totalCoins) {
      coinsTaken += coins[i];
      totalCoins -= coins[i];
      numberOfCoinsTaken++;
    }
  }

  cout << numberOfCoinsTaken << endl;

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}