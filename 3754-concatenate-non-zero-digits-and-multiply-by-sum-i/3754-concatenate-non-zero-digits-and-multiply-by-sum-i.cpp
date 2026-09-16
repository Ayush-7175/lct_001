class Solution {
public:
    long long sumAndMultiply(int n) {
        int dig;
        long long  sum=0;
        int a=1;
        int n1=0;
        while(n>0)
        {
            dig=n%10;
            if(dig!=0)
            {
               n1 = dig*a+n1;
                a=a*10;
                sum=sum+dig;

                
            }
            n=n/10;
        }
        return n1*sum;
    }
};