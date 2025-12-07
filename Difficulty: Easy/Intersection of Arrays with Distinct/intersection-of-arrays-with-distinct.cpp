class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        set<int>s1(a.begin(),a.end());
        int cnt=0;
        for(int x:b){
            if(s1.count(x)) cnt++;
        }
        return cnt;
    }
};