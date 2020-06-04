#include <stdio.h>
 
int main(void) {
  int n, ans;
  
  scanf("%d", &n);
  while(n != 0) {
    if (n >= 100) {
      ans++;
      n = n - 100;
    }
    else if (n >= 20) {
      ans++;
      n = n - 20;
    }
    else if (n >= 10) {
      ans++;
      n = n - 10;
    }
    else if (n >= 5) {
      ans++;
      n = n - 5;
    }
    else {
      ans++;
      n = n - 1;
    }
  }
  printf("%d", ans);
}