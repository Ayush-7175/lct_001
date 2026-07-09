class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low=0;
        int high=0;
        int count=0;
        int res=INT_MIN;
        int len=nums.size();
        for(high=0;high<len;high++)
        {
            if(nums[high]==0)
            { 
                count++;
            }
            while(count>1)
            {
                if(nums[low]==0)
                {
                    count--;
                }
                low++;
            }
        
            res=max(res,high-low);
        }
        return res;
    }
};