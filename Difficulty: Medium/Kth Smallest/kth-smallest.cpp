// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> pq;
        int r=arr.size();
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        for(int i=k; i<r; i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        int ans=pq.top();
        return ans;
    }
};