class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> numi;

        for(int i=0; i<nums.size(); i++){
            numi.push_back({nums[i],i});
        }

        sort(numi.begin(),numi.end());
        int left=0;
        int right=nums.size()-1;

        while(left<right){
            int sum=numi[left].first+numi[right].first;

            if(sum==target){
                return {numi[left].second,numi[right].second};
            }
            else if(sum<target){
                left++;
            }
            else right--;
        }
        return {};
    }
};