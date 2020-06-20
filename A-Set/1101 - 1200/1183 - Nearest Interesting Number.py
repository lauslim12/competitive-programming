number = int(input())
number_check = sum(list(map(int, str(number))))

while number_check % 4 != 0:
  number += 1
  number_check = sum(list(map(int, str(number))))

print(number)
