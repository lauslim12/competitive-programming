#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int times, ans = 0, tmp;
  cin >> times;
  int students[times];

  for(int i = 0; i < times; i++) {
    cin >> students[i];
  }

  sort(students, students + times);

  for(int i = 0; i < times; i += 2) {
    ans += students[i + 1] - students[i];
  }
  cout << ans;

  return 0;
}