# Initialize our dictionary.
tokitsukaze = {}

# Process our input.
tokitsukazeHP = int(input())

# Get our ideal value of Tokitsukaze's rank by brute-forcing through the input received.
for i in range(0, 3):
  tokitsukazeCategory = (int(tokitsukazeHP + i)) % 4

  if tokitsukazeCategory == 0:
    tokitsukaze[i] = 'D'
  elif tokitsukazeCategory == 1:
    tokitsukaze[i] = 'A'
  elif tokitsukazeCategory == 2:
    tokitsukaze[i] = 'C'
  else:
    tokitsukaze[i] = 'B'

# Sort the dictionary by its value.
sorted_tokitsukaze = sorted(tokitsukaze.items(), key=lambda x: x[1])

# Unpack our tuple to get the answer.
tokitsukaze_added, tokitsukaze_rank = sorted_tokitsukaze[0]

# Print our answer.
print(tokitsukaze_added, tokitsukaze_rank)
