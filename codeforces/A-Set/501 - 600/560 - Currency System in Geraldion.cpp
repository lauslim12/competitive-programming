#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  const int checker = 1;
  std::vector<int> arr;
  int n, tmp;
  
  std::cin >> n;
  
  for(int i = 0; i < n; i++) {
    std::cin >> tmp;
    arr.push_back(tmp);
  }

  std::vector<int>::iterator res = std::find(arr.begin(), arr.end(), 1);
  
  if(res != arr.end()) {
    std::cout << "-1";
  }
  else {
    std::cout << checker;
  }
  
  return 0;
}