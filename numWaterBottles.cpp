class Solution {
public:
    int numWaterBottles(int b, int e) {
        int sum=b; 
        while(b>e){
            int q=b/e;
            int m=b-e*q;
            sum=sum+q;
            b=q+m;
            
        }
        return b%e==0?sum+1:sum;

    }
};
