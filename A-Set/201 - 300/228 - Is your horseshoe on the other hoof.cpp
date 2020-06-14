#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  const int numberOfHorseshoes = 4;
  int color[numberOfHorseshoes], ans = 0 ;

  for(int i = 0; i < numberOfHorseshoes; i++) {
    cin >> color[i];
  }

  sort(color, color + numberOfHorseshoes);

  for(int i = 0; i < numberOfHorseshoes; i++) {
    if(i > 0) {
      if(color[i] == color[i - 1]) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}