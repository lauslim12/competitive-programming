#include <stdio.h>
 
int main(void) {
  int n, k;
  scanf("%d%d", &n, &k);
  int r, g, b;
  r = ((n * 2) + k - 1)/k;
  g = ((n * 5) + k - 1)/k;
  b = ((n * 8) + k - 1)/k;
  int tot = r + g + b;
  printf("%d", tot);
  return 0;
}