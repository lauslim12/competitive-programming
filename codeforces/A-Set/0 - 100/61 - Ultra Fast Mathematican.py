first_number = list(map(str, input()))
second_number = list(map(str, input()))
ans = []

for i, j in zip(first_number, second_number):
  if i == '1' and j == '1' or i == '0' and j == '0':
    ans.append('0')
  else:
    ans.append('1')

print(''.join(ans))