class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxno=0;
        
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if (freq[nums[i]]>1){
                return nums[i];
            }
        }
       
        return -1;
    }
};