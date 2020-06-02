#include <iostream>
#include <string>

int main() {
  std::string s;
  int a = 0, b = 0;
  
  std::cin >> s;
  
  for(int i = 0; s[i] != '\0'; i++) {
    if(isupper(s[i])) {
      a++;
    }
    else {
      b++;
    }
  }
  
  if(a > b) {
    for(int i = 0; s[i] != '\0'; i++) {
      s[i] = toupper(s[i]);
    }
  }
  else {
    for(int i = 0; s[i] != '\0'; i++) {
      s[i] = tolower(s[i]); 
    }
  }
  
  std::cout << s;
}
