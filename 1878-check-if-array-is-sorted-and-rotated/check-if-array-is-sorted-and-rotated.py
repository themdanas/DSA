class Solution:
    def check(self, nums: List[int]) -> bool:
        
        break_point = 0

        for i, curr_val in enumerate(nums):
            if nums[i-1] > curr_val:
                break_point += 1

        return break_point<=1