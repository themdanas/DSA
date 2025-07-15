class Solution {
public:
        const int mod = 1e9 + 7;
        int sumSubarrayMins(vector<int>& arr) {
            vector<int> nse= findnse(arr);
            vector<int> pse= findpse(arr);
            int n=arr.size();

            long long total=0;

            for(int i=0; i<n; i++){
                long long left=i-pse[i];
                long long right= nse[i]-i;

                total = (total + ((long long) arr[i] * left % mod) * right % mod) % mod;
            }

            return (int)total;

        }

        vector<int> findnse(vector<int>& arr){
            int n=arr.size();
            vector <int> nse(n,n);
            stack <int> st;

            for(int i=0; i<n; i++){
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    nse[st.top()] = i;
                    st.pop();
                }
                st.push(i);

            }
            return nse;

        }

        vector<int> findpse(vector<int>& arr){
            int n=arr.size();
            vector <int> pse(n,-1);
            stack <int> st;

            for(int i=0; i<n; i++){
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                }

                if (!st.empty()) {
                    pse[i] = st.top();
                }
                st.push(i);
                    
                
               
            }

            return pse;

        }
    
};