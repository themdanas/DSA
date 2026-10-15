class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int total = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int distinct = 0;
            vector<int> s(101, 0);

            for (int j = i; j < n; j++) {
                if (s[nums[j]] == 0) {
                    distinct++;
                }

                s[nums[j]]++;

                total += distinct * distinct;
            }
        }

        return total;
    }
};