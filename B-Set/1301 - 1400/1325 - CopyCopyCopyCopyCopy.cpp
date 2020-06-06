#include <iostream>
#include <set>
using namespace std;

int main() {
  int times, arraySize, ctr = 0;

  cin >> times;
  int ans[times];

  for(int i = 0; i < times; i++) {
    set<int> numbers;
    cin >> arraySize;

    for(int i = 0; i < arraySize; i++) {
      int tmp;
      cin >> tmp;
      numbers.insert(tmp);
    }

    ans[ctr] = numbers.size();
    ctr++;
  }

  for(int i = 0; i < ctr; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}