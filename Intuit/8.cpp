class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int res=0;
        unordered_map<int,int> m;
        
        for(int i=0;i<p.size();i++){
            for(int j=0;j<p.size();j++){
                int dis= pow(p[j][1]-p[i][1],2)+pow(p[j][0]-p[i][0],2);
                res+=2*m[dis]++;
            }
            m.clear();
        }
        return res;
    }
};
