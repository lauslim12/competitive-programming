#include <iostream>
#include <map>
#include <string>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define endl "\n";

int main() {
  IOS;
  int testCases;
  map<string, int> nameList;
  cin >> testCases;

  while (testCases--) {
    string name;
    cin >> name;

    if (nameList.count(name) > 0) {
      cout << "YES" << endl;
    } else {
      nameList[name] = 1;
      cout << "NO" << endl;
    }
  }

  return 0;
}