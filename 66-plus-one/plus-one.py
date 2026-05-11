class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
       

        total = int(''.join(map(str, digits)))
        
        total = total+1 

        arr=[]

        for digit in str(total):
            arr.append(int(digit))

        return arr
            