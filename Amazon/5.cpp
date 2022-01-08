class Solution{
public:
    
    void helper(vector<vector<string>> &res, set<string> contact, string s){
        int t=s.size();
        vector<string> a;
        for (auto itr = contact.begin(); itr != contact.end(); itr++) {
            string x=*itr;
            if(x.substr(0,t)==s)
            a.push_back(x);
        }
        if(a.size()==0){
            a.push_back("0");   
        }
        res.push_back(a);
    }
    
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>> res;
        set<string> a;
        for(int i=0;i<n;i++){
            a.insert(contact[i]);
        }
        for(int i=0;i<s.size();i++){
            helper(res,a,s.substr(0,i+1));
        }
        
        return res;
    }
};
