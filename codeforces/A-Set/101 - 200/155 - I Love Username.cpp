#include <stdio.h>

int main() {
  int contests, points[1000];
  int lowest, highest; 
  int size = 0, ans = 0;
  
  scanf("%d", &contests);
  
  for(int i = 0; i < contests; i++) {
    scanf("%d", &points[i]);
    size++;
  }
  
  lowest = points[0];
  highest = points[0];
  for(int i = 0; i < contests; i++) {
    if(points[i] < lowest) {
      lowest = points[i];
      ans++;
    }
    
    if(points[i] > highest) {
      highest = points[i];
      ans++;
    }
  }
  
  printf("%d", ans);
  return 0;
}
