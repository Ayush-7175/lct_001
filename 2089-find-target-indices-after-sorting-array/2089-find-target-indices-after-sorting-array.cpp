class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int start=0;
        int end=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<target)
            {
                start++;
            }
            else if(nums[i]==target)
            {
                end++;
            }
        }
        for(int i=start;i<end+start;i++)
        {
            ans.push_back(i);
        }
        return ans;
    } 
};