#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int tmp, a, b, c, res;
  std::vector<int> ary;
  
  for(int i = 0; i < 3; i++) {
    std::cin >> tmp;
    ary.push_back(tmp);
  }
  
  sort(ary.begin(), ary.end());
  
  a = ary.at(0);
  b = ary.at(1);
  c = ary.at(2);
  res = (c - b) + (b - a);
  
  std::cout << res << std::endl;
  return 0;
}