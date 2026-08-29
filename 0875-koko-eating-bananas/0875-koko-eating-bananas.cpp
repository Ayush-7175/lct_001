class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        int ans=right;
        long long sum=0;
        int middle=left+(right-left)/2;
        while(left<right)
        {  
            middle=left+(right-left)/2;
            for(int i=0;i<piles.size();i++)
            {   if(piles[i]/middle==0||piles[i]%middle!=0)
            {
                sum++;
            }
            sum=sum+piles[i]/middle;
                
            }
            if(sum<=h)
            { 
                right=middle;
                ans=middle;
            }
           
            if(sum>h)
            {
                left=middle+1;
            }
          sum=0;

        }
        return left;
    }
};