#include <iostream>
using namespace std;

int main() {
  int times, hardOrNo;
  cin >> times;

  while(times--) {
    cin >> hardOrNo;
    if(hardOrNo == 1) {
      cout << "HARD" << endl;
      return 0;
    }
  }

  cout << "EASY" << endl;
  return 0;
}