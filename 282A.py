x = 0
number = int(input())

for i in range(number):
  operation = input()
  
  if operation == '++X' or operation == 'X++':
    x += 1
  elif operation == '--X' or operation == 'X--':
    x -= 1
print(x)