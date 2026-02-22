
class Solution:
    def freqn(self, freq):
        for key, value in freq.items():
            if value == 1:
                return key

    def singleNumber(self, nums: List[int]) -> int:
        freq = {}

        for num in nums:
            if num not in freq:
                freq[num] = 1
            else:
                freq[num] += 1

        return self.freqn(freq)
