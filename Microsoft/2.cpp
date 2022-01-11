class Solution {
public:
	bool isPossible(int n, vector<pair<int, int> >& p) {
	    vector<vector<int>> arr(n);
	    vector<int> deg(n,0);
	    
	    for(int i=0;i<p.size();i++){
	        arr[p[i].second].push_back(p[i].first);
	        deg[p[i].first]++;
	    }
	    queue<int> q;
	    for(int i=0;i<n;i++){
	        if(deg[i]==0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int t=q.front();
	        q.pop();
	        
	        for(int i=0;i<arr[t].size();i++){
	            deg[arr[t][i]]--;
	            if(deg[arr[t][i]]==0){
	                q.push(arr[t][i]);
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(deg[i]>0) return false;
	    }
	    return true;
	}
};
