class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    vector<ull> res(1,1);
        int i=0,j=0,k=0;
        
        while(res.size()<n){
            res.push_back(min({res[i]*2,res[j]*3,res[k]*5}));
            if(res.back()==res[i]*2)i++;
            if(res.back()==res[j]*3)j++;
            if(res.back()==res[k]*5)k++;
        }
        return res.back();
	}
};
