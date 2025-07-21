class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlen=0;
        int hash[257];
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }

        int n=s.length();
        while(r<n){
            if(hash[s[r]] != -1 && hash[s[r]] >= l){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlen=max(len,maxlen);
            hash[s[r]]=r;
            r++;
        }

        return maxlen;
    }
};