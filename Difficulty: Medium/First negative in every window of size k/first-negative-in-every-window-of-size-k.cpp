class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        list<int> l;
        vector<int> v;
         int j=0;
         int i=0;
         
         while(j<arr.size()){
             if(arr[j]<0){
                 l.push_back(arr[j]);
             }
             
             if(j-i+1<k){
                 j++;
             }
             else if(j-i+1 == k){
                 
                 if(l.size() == 0){
                     v.push_back(0);
                 }
                 else{
                     v.push_back(l.front());
                 }
            
                if(!l.empty() && arr[i] == l.front()){
                    l.pop_front();
                }
                j++;
                i++;
             }
             
         }
         
         return v;
    }
};