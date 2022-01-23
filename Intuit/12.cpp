class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n,vector<int>());
        vector<int> deg(n,0), res;
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            deg[pre[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(deg[i]==0){
                q.push(i);
                res.push_back(i);
            }
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            n--;
            for(auto a:adj[curr]){
                deg[a]--;
                if(deg[a]==0){
                    q.push(a);
                    res.push_back(a);
                }
            }
        }
        if(n!=0)
            res.clear();
        return res;
        
    }
};
