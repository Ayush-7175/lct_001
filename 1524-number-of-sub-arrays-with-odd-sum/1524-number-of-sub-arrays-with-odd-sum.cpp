class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int modu=1000000000+7;
        long long odd=0,even=0,res=0;
        for(int x:arr)
        {
            if(x%2==1)
            {
                long long newodd=even+1;
                long long neweven=odd;
                odd=newodd;
                even=neweven;
                
            }
            else{
                even++;
            }
            res=(res+odd)%modu;
        }
        return res;
    }
};