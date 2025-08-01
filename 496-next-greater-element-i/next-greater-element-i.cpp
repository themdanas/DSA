class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap;
        stack<int> st;

        for(int i = nums2.size() - 1; i >= 0; i--) {
            int current = nums2[i];
            while(!st.empty() && st.top() <= current) {
                st.pop();
            }
            if(!st.empty()) {
                ngeMap[current] = st.top();
            } else {
                ngeMap[current] = -1;
            }
            st.push(current);
        }

        vector<int> result;
        for(int num : nums1) {
            result.push_back(ngeMap[num]);
        }

        return result;
    }
};