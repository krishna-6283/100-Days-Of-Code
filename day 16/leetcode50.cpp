class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);
        if(n==0){
            return 1.0;
        }
        if(n==1){
            return x;
        }
        if(n==-1){
            return 1/x;
        }
        if(x==0){
            return 0;
        }
        double temp = myPow(x,n/2);
        if(n%2==0){
            return temp*temp;
        }
        else if(n%2==1 && n>0){
            return temp*temp*x;
        }
        else{
            return temp*temp/x;
        }
    }
};