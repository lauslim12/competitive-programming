#include <cstdio>
#include <vector>

int main() {
  int subarray = 1, n, tmp;
  bool split;
  std::vector<int> vc;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++) {
    scanf("%d", &tmp);
    vc.push_back(tmp);
  }
  
  tmp = 1;
  
  for(int i = 0; i < vc.size() - 1; i++) {
    if(vc[i+1] > vc[i]) {
      subarray++;
    }
    else {
      if(subarray > tmp) {
        tmp = subarray;
      }
      subarray = 1;
    }
  }
  
  if(tmp > subarray) {
    subarray = tmp;
  }
  
  printf("%d", subarray);
  return 0;
}
