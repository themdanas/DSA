class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> freq;
        int maxFreq=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};