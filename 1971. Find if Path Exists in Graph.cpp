//https://leetcode.com/problems/find-if-path-exists-in-graph/
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        queue<int> q;
        unordered_map <int,vector<int>> mp;
        q.push(source);
       vector<bool> visited(n+1,false);
        for(auto it:edges){
            mp[it[0]].push_back(it[1]);
            mp[it[1]].push_back(it[0]);
        }
        while(!q.empty())
        {
            int vertex=q.front();
            visited[vertex]=true;
            q.pop();
            vector<int> temp=mp[vertex];
            for(auto it:temp){
                if(visited[it]==false){
                    q.push(it);
                    visited[it]=true;
                }
            }
    //   return visited[destination];
        }
         return visited[destination];
    }
};
