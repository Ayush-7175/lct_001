class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int s=1;
        int l=1;
        int max_len=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                 s++;
                 l=1;
            }
            else if (nums[i]<nums[i-1])
            {
                l++;
                s=1;
            }
            else{
                l=1;
                s=1;
            }
            max_len=max({max_len,s,l});
        }
        return max_len;
    }
};