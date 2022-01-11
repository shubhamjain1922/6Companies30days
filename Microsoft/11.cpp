vector<string> generate(int N)
{
	vector<string> res;
	string s="";
	
	for(int i=1;i<=N;i++){
	    int a=i;
	    while(a){
	        int b=a%2;
	        s=to_string(b)+s;
	        a/=2;
	    }
	    res.push_back(s);
	    s="";
	}
	return res;
}
