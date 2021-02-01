#include <iostream>
#include <algorithm>
 
int main() {
  int numberOfMembers, times, size = 0, teamCtr = 0, ans = 0;
  int members[2000];
  
  std::cin >> numberOfMembers >> times;
  
  for(int i = 0; i < numberOfMembers; i++) {
    std::cin >> members[i];
    size++;
  }
  
  std::sort(members, members+size);
  
  for(int i = 0; i < size; i++) {
    if(members[i] + times <= 5) {
      teamCtr++;
    }
    
    if(teamCtr == 3) {
      ans++;
      teamCtr = 0;
    }
  }
  
  std::cout << ans;
  
  return 0;
}