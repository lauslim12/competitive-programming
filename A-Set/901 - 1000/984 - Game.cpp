#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int solve() {
  // Solution here.
  int numberOfIntegers;
  deque<int> doubleQueue;
  cin >> numberOfIntegers;

  int numbers[numberOfIntegers];

  for (int i = 0; i < numberOfIntegers; i++) {
    cin >> numbers[i];
  }

  sort(numbers, numbers + numberOfIntegers);

  // Insert into the double queue.
  for (int i = 0; i < numberOfIntegers; i++) {
    doubleQueue.push_front(numbers[i]);
  }

  for (int i = 0; i < numberOfIntegers - 1; i++) {
    if (i % 2 == 0) {
      doubleQueue.pop_front();
    } else {
      doubleQueue.pop_back();
    }
  }

  // Show the results.
  cout << doubleQueue.at(0) << endl;

  return 0;
}

int main() {
  // Solve the problem!
  IOS;
  solve();

  return 0;
}