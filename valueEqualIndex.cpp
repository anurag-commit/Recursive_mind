class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector <int> output;
        int n = arr.size();
        for (int i=1; i<=n; i++){
            if (arr[i-1] == i){
                output.push_back(i);
            }
        }
        return output;
    }
};