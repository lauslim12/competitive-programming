#include <iostream>
using namespace std;

int main() {
  short numberOfRooms, ans = 0;
  short peopleWhoLive, roomCapacity;
  cin >> numberOfRooms;

  for(int i = 0; i < numberOfRooms; i++) {
    cin >> peopleWhoLive >> roomCapacity;

    if(peopleWhoLive + 2 <= roomCapacity) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}