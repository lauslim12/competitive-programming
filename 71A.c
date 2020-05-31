#include <stdio.h>
#include <string.h>

int main() {
  int totalWord, i, k;
  char first_char, last_char;
  char string[100000];

  scanf("%d", &totalWord);

  for(i = 0; i < totalWord; i++) {
    int counter = 0;
    scanf("%s", string);
    int length = strlen(string);
    
    if(length <= 10) {
      printf("%s\n", string);
    }
    else {
      for(k = 0; k < length - 2; k++) {
        first_char = string[0];
        last_char = string[length-1];
        counter++;
      }
      printf("%c%d%c\n", first_char, counter, last_char);
    }
  }
}