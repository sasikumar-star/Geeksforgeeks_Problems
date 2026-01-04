// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code here
        int totalsum=0;
        int mini=INT_MAX;
        for(int i=0;i<arr.size();i++){
            totalsum+=arr[i];
            mini=min(totalsum,mini);
            if(totalsum>=0) totalsum=0;
        }
        return mini;
    }
};
