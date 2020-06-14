#include <iostream>
using namespace std;

int main() {
  int countTeam = 1;
  bool isDangerous = false;
  char players[101];
  cin >> players;

  for(int i = 0; players[i] != '\0'; i++) {
    if(players[i] == players[i - 1]) {
      countTeam++;
      
      if(countTeam == 7) {
        isDangerous = true;
        break;
      }
    }
    else {
      countTeam = 1;
    }
  }

  if(isDangerous == true) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}