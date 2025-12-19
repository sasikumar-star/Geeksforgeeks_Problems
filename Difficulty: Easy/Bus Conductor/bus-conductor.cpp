class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        // code here
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        int sum=0;
        for(int i=0;i<chairs.size();i++){
                 sum+=abs(chairs[i]-passengers[i]);
                }
        return sum;
    }
};

