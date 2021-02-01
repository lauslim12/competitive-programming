#include <iostream>
using namespace std;

int main() {
  int testCases, answerX = 0, answerY = 0, answerZ = 0;
  int coordinateX, coordinateY, coordinateZ;
  cin >> testCases;

  while(testCases--) {
    cin >> coordinateX >> coordinateY >> coordinateZ;
    answerX += coordinateX;
    answerY += coordinateY;
    answerZ += coordinateZ;
  }

  if(answerX == 0 && answerY == 0 && answerZ == 0) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}