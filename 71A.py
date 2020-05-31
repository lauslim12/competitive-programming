#!/usr/bin/env python
integer = int(input())

for x in range(integer):
  counter = 0
  text = str(input())
  text = list(text)
  length = len(text)

  if len(text) <= 10:
    print(''.join(map(str, text)))
  else:
    for i in text[1:-1]:
      counter += 1
      first_char = text[0]
      last_char = text[-1]
    print(first_char + str(counter) + last_char)