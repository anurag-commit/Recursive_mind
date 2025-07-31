class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> ans;
        
        int l=0;
        int r= arr.size() -1;
        int firstOccurance=-1;
        int lastOccurance =-1;
        
        while( l <= r)
        {
            int mid =l +(r -l)/2;
            // first occurense
            if(arr[mid] == x ){
                r = mid -1;
                firstOccurance= mid;
            }
            else if( arr[mid] < x){
                l =mid +1;
            }else{
                r =mid -1;
            }
        }
        ans.push_back(firstOccurance);
        
        l=0;
        r= arr.size() -1;
        
        while( l <= r){
            int mid = l+(r -l)/2;
            // last occurence
            if(arr[mid] ==x){
                lastOccurance= mid;
                l =mid+1;
            }else if(arr[mid] < x){
                l= mid+1;
            }else{
                r =mid -1;
            }
        }
        ans.push_back(lastOccurance);
        
        return ans;
    }
};