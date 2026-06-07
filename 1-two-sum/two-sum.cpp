class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> value;
        int n = nums.size();
        for(int i=0; i<n; i++){
            value[nums[i]]=i;
        }
        for(int i=0; i<n; i++){
           int y=target-nums[i];
           if(value.find(y) != value.end() && value[y]!=i){
            return {value[y],i};
           }

        }
        return {};
    }
};