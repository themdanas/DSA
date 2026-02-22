class Solution:
    def largest(self, arr):
        result = arr[0]
         
        for i in range(len(arr)):
             if arr[i]>result:
                 result = arr[i]
        
        return result
