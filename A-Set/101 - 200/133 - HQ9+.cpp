#include <iostream>
using namespace std;

int main() {
  char instruction[101];
  int i = 0;
  bool isValid = false;
  cin >> instruction;

  while(instruction[i] != '\0') {
    if(instruction[i] == 'H' || instruction[i] == 'Q' || instruction[i] == '9') {
      isValid = true;
      break;
    }
    i++;
  }

  if(isValid == true) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}