class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        int i=0;

        while(i<n){
            int start = nums[i];

            while(i<n-1 && nums[i] + 1 == nums[i+1]){
                i++;
            }

            if(start != nums[i]){
                result.push_back(to_string(start)+"->"+to_string(nums[i]));
            }

            else{
                result.push_back(to_string(nums[i]));
            }

            i++;
        }

        return result;
    }
};