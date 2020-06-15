#include <iostream>
using namespace std;

int main() {
  char vasyaWord[101];
  int wordCounter = 0;
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> vasyaWord;

  for (int i = 0; vasyaWord[i] != '\0'; i++) {
    if (vasyaWord[i] == 'h' && wordCounter == 0)
      wordCounter++;
    else if (vasyaWord[i] == 'e' && wordCounter == 1)
      wordCounter++;
    else if (vasyaWord[i] == 'l' && wordCounter == 2)
      wordCounter++;
    else if (vasyaWord[i] == 'l' && wordCounter == 3)
      wordCounter++;
    else if (vasyaWord[i] == 'o' && wordCounter == 4) {
      wordCounter++;
      break;
    } 
    else {
      continue;
    }
  }

  if (wordCounter == 5) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}