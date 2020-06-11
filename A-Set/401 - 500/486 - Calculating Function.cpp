#include <iostream>
using namespace std;

int main() {
  long long functionParam, ans = 0;
  cin >> functionParam;
  
  if(functionParam % 2 == 0) {
    ans = functionParam / 2;
  }
  else {
    ans = ((functionParam + 1) / 2) * -1; 
  }

  cout << ans << endl;

  return 0;
}