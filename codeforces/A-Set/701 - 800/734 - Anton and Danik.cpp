#include <iostream>
using namespace std;

int main() {
  int times, size = 0, i = 0;
  int anton = 0, danik = 0;
  char games[100001];
  
  cin >> times;
  cin >> games;
  
  while(games[i] != '\0') {
    if(games[i] == 'A') {
      anton++;
    }
    else if(games[i] == 'D') {
      danik++;
    }
    else {
      continue;
    }
    i++;
  }
  
  if(anton > danik) {
    cout << "Anton";
  }
  else if(anton < danik) {
    cout << "Danik";
  }
  else {
    cout << "Friendship";
  }
  
  return 0;
}