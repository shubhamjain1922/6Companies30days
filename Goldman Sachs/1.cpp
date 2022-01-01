class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>>m;
        for(auto i:s)
        {
            string t = i;
            sort(t.begin(),t.end());
            m[t].push_back(i);
        }
        
        for(auto i:m)
        res.push_back(i.second);
        return res;
    }
};
