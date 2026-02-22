class Solution:
    def MaxFreq(self,freq):
        Maxf = 0
        Maxk = None
        for key, value in freq.items():
            if value>Maxf:
                Maxf=value
                Maxk=key
        return Maxk

    def majorityElement(self, nums: List[int]) -> int:
        freq = {}
        for num in nums:
            if num not in freq:
                freq[num] = 1
            else :
                freq[num]+=1
        return self.MaxFreq(freq)
        
