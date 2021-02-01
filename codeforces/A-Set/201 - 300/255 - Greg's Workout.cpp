#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int days, trainingCounter = 0, tmp;
  int chest = 0, biceps = 0, back = 0;
  cin >> days;

  while (days--) {
    if (trainingCounter == 0) {
      cin >> tmp;
      chest += tmp;
    } else if (trainingCounter == 1) {
      cin >> tmp;
      biceps += tmp;
    } else {
      cin >> tmp;
      back += tmp;
      trainingCounter = 0;
      continue;
    }
    trainingCounter++;
  }

  if (chest > biceps && chest > back)
    cout << "chest\n";
  else if (biceps > chest && biceps > back)
    cout << "biceps\n";
  else if (back > chest && back > biceps)
    cout << "back\n";

  return 0;
}