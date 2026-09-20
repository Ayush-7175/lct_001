class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int a ='z'-s[i]+1;
            int b=i+1;
            sum=sum+(a*b);
        }
        return sum;
    }
};