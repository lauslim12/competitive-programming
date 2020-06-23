#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int numberCounter = 0;
  char expression[201], answer[201];
  cin >> expression;

  for (int i = 0; expression[i] != '\0'; i++) {
    if (expression[i] == '.') {
      answer[numberCounter] = '0';
      numberCounter++;
      continue;
    }

    if (expression[i] == '-' && expression[i + 1] == '.') {
      answer[numberCounter] = '1';
      numberCounter++;
      // Skip the next character.
      i++;
      continue;
    }

    if (expression[i] == '-' && expression[i + 1] == '-') {
      answer[numberCounter] = '2';
      numberCounter++;
      // Skip the next character.
      i++;
      continue;
    }
  }

  for (int i = 0; i < numberCounter; i++) {
    cout << answer[i];
  }

  return 0;
}