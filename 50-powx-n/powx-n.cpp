class Solution {
private:
    double power(double x, long num){
        if(num==1) return x;
        if(num==0) return 1.0;
        if (num%2==0) {
            return power(x*x,num/2);
        }
        return x*power(x,num-1);
    }
public:
    double myPow(double x, int n) {
        long long num=n;
        if(num<0){
            return (1.0/power(x, -1*num));
        }
        return power(x,num);
    }
};