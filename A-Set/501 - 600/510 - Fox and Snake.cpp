#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int columns, rows;
  bool startFromLeft = false;
  cin >> rows >> columns;

  for (int i = 0; i < rows; i++) {
    if (i % 2 == 0) {
      for (int j = 0; j < columns; j++) {
        cout << "#";
      }
    } else {
      if (startFromLeft == true) {
        for (int k = 0; k < columns; k++) {
          if (k == 0) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
        startFromLeft = false;
      } else if (startFromLeft == false) {
        for (int l = 0; l < columns; l++) {
          if (l == columns - 1) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
        startFromLeft = true;
      }
    }
    cout << "\n";
  }

  return 0;
}