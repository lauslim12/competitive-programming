word = input().lower()
ans = []
vowels = ('a', 'i', 'u', 'e', 'o', 'y')
filtered_word = word

for i in word:
  if i in vowels:
    filtered_word = filtered_word.replace(i, "")

for i in filtered_word:
  ans.append('.')
  ans.append(i)

print(''.join(ans))