class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int mi = nums[i]; 
            int ma = nums[i];
            for(int j=i; j<n; j++){
                ma=max(ma,nums[j]);
                mi=min(mi,nums[j]);
                ans += ma-mi;
            }
        }
        return ans;
    }
};