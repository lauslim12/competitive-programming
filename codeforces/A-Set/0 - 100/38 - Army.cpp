#include <iostream>
using namespace std;

int main() {
  int maxRank, initRank, wishedRank;
  int ans = 0;
  cin >> maxRank;
  
  int years[maxRank];
  
  for(int i = 0; i < maxRank - 1; i++) {
    cin >> years[i];
  }

  cin >> initRank >> wishedRank;
  
  for(int i = initRank; i < wishedRank; i++) {
    ans += years[i - 1];
  }

  cout << ans;
  return 0;
}