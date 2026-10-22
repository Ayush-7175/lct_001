class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {     sum=0;
            int n=nums[i];
            if(n==0)
            {
                sum=0;
            }
            else{
            while(n>0)
            {
                int dig=n%10;
                sum=sum+dig;
                n=n/10;
            }
            }
            if(sum==i)
            {
                return i;
            }
        }
        return -1;
        
    }
};