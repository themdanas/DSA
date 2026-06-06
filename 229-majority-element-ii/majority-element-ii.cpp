class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second>(n/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};