//https://leetcode.com/problems/find-the-town-judge/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>data(n+1,0);
        for(auto x:trust){
            //int val=
            data[x[0]]--;
            data[x[1]]++;
        }
        for(int i=1;i<n+1;i++){
            if(data[i]==n-1)return i;
        }
        return -1;
    }
};
