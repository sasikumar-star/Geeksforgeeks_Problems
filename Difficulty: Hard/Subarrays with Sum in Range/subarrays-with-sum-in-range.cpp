class Solution {
  public:
    int subby(vector<int>&arr,int low){
        // subarray sum >=3
        int n=arr.size();
        int l=0;
        int sum=0;
        int cnt=0;
        for(int r=0;r<n;r++){
            sum+=arr[r];
            while(sum>=low){
               cnt+=n-r;
               sum-=arr[l];
               l++;
            }
        }
        return cnt;
    }
  
    int countSubarray(vector<int>& arr, int low, int high) {
        // code here
        return subby(arr,low)-subby(arr,high+1);
    }
};