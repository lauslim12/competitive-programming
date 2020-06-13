word = input()
capital_count = 0

for i in word[1:]:
  if i.isupper():
    capital_count += 1

if word.isupper():
  print(word.lower())
elif capital_count == len(word) - 1:
  print(word.capitalize())
else:
  print(word)