#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int voidAbsorption(int &health) {
  health = floor((health / 2)) + 10;
}

int lightningStrike(int &health) {
  health = health - 10;
}

int main() {
  int testCases, hp, timesLightningStrike, timesVoidAbsorption, counter = 0, prevHp = 0;
  vector<string> answers;
  vector<string>::iterator it;
  cin >> testCases;

  while(testCases--) {
    cin >> hp >> timesVoidAbsorption >> timesLightningStrike;

    while(hp > 0 && timesVoidAbsorption > 0 && floor(hp/2 + 10) < hp) {
      timesVoidAbsorption--;
      voidAbsorption(hp);
    }

    while(timesLightningStrike--) {
      lightningStrike(hp);
      if(hp <= 0) {
        break;
      }
    }

    if(hp <= 0) {
      answers.push_back("YES");
    }
    else {
      answers.push_back("NO");
    }
  }

  for(it = answers.begin(); it != answers.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}