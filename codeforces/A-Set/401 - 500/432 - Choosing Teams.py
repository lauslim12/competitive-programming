teamCounter = 0
ans = 0
numberOfMembers, times = list(map(int, input().split()))
members = list(map(int, input().split()))
members.sort()

for i in members:
  if i + times <= 5:
    teamCounter += 1

  if teamCounter == 3:
    ans += 1
    teamCounter = 0

print(ans)