ctr1 = 0
ctr2 = 0
msg = "Poor Alex"
n = int(input())

for _ in range(n):
  a, b = list(map(int, input().split()))
  if b > a or b > a:
    msg = "Happy Alex"
    break

print(msg)