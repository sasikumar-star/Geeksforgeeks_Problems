class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>s1(a.begin(),a.end());
        for(int x: b){
            s1.insert(x);
        }
        vector<int>ans(s1.begin(),s1.end());
        return ans;
    }
       
};