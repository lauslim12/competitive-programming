a = []
b = 0
c = 0
n = int(input())
m = int(input())

for i in range(n): 
  a.append(int(input()))

a.sort()
while b < m:
  b += a.pop()
  c += 1
print(c)