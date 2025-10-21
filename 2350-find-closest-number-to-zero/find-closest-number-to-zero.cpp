class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int temp=nums[0];
        for(int i=0; i<n; i++){
            if (abs(nums[i]) < abs(temp)|| (abs(nums[i]) == abs(temp) && nums[i] > temp)){
               temp=nums[i]; 
            }
        }
        return temp;
    }
};