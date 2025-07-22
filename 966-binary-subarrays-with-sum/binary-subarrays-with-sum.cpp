class Solution {


public:
    int numSubarraysWithSum(vector<int>& nums, int goal){
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
private:    
    int atmost(vector<int>& nums, int goal) {
        int l=0;
        int r=0;
        int sum=0;
        int cnt=0;

        if(goal<0) return 0;

        for (r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (l <= r && sum > goal) {
                sum -= nums[l];
                l++;
            }

            cnt += (r - l + 1);
        }

        return cnt;
    }
};