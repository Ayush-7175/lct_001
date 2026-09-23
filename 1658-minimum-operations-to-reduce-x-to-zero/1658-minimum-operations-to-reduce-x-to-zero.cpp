class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int left=0;
        int right=0;
        int ans=-1;
        int sum=0;
        int currentsum=0;
        int len=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        int target=sum-x;
        for(int right = 0; right < nums.size(); right++)
        {
            currentsum=nums[right]+currentsum;
            while(currentsum>target && left<=right)
            {
                currentsum -= nums[left];
                left++;
            }
        if(currentsum==target)
            {
                  len=right-left+1;
                  ans=max(ans,len);
                  
            }

        }
         if(ans==-1)
         {
            return -1;
         }
        
        return nums.size()-ans;

    }
};