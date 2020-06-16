#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int matrixRow, matrixColumn;
  char color;
  bool isColored = false;

  cin >> matrixRow >> matrixColumn;

  for (int i = 0; i < matrixRow; i++) {
    for (int j = 0; j < matrixColumn; j++) {
      cin >> color;
      if (color == 'Y' || color == 'M' || color == 'C') {
        isColored = true;
      }
    }
  }

  if (isColored == true) {
    cout << "#Color" << endl;
  } else {
    cout << "#Black&White" << endl;
  }

  return 0;
}