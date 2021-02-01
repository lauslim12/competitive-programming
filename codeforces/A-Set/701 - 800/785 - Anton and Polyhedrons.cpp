#include <iostream>
#include <string.h>
using namespace std;

int main() {
  int times, faces = 0;
  char tmp[100];
  
  cin >> times;
  
  for(int i = 0; i < times; i++) {
    cin >> tmp;
    
    if(strcmp("Icosahedron", tmp) == 0) {
      faces += 20;
    }
    else if(strcmp("Dodecahedron", tmp) == 0) {
      faces += 12;
    }
    else if(strcmp("Octahedron", tmp) == 0) {
      faces += 8;
    }
    else if(strcmp("Cube", tmp) == 0) {
      faces += 6;
    }
    else {
      faces += 4;
    }
  }
  
  cout << faces;
  
  return 0;
}