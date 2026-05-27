class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket(nums.size()+1);
        unordered_map<int,int> freqmap ;
        int n=nums.size();

        for(int i=0; i<n; i++){
            freqmap[nums[i]] ++;
        }

        for(auto it: freqmap){
            int key=it.first;
            int freq = it.second;

            bucket[freq].push_back(key);

        }
        vector<int> topk;
        for(int pos=n; pos>=0 && topk.size()<k; pos--){
            for(int n:bucket[pos]){
                topk.push_back(n);
            }
        }
        return topk;
    }
};