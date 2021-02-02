class Solution:
    def reverse(self, x: int) -> int:
      string = str(x).split('-')

      if '-' in str(x):
        integer = int('-' + string[1][::-1])

        if abs(integer) > (2 ** 31 - 1): 
          return 0
        
        return int('-' + string[1][::-1])
      else:
        integer = int(str(x)[::-1])

        if abs(integer) > (2 ** 31 - 1):
          return 0
        
        return int(str(x)[::-1])