class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        hashmap = {}
        
        for num in nums:
            if num in hashmap:
                hashmap[num] += 1
            else:
                hashmap[num] = 1
        
        for k, v in hashmap.items():
            if v == 1:
                return k