class Solution{
public:
    int minSteps(int d){
        int sum=0,step=0;
        
        while(sum<d){
            sum+=step;
            step++;
        }
        
        while((sum-d)%2!=0){
            sum+=step;
            step++;
        }
        return step-1;
    }
};
