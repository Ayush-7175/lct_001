class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int median;
        int sum=0;
        sort(nums.begin(),nums.end());
        median=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++)
        {
          sum=sum+(abs(nums[i]-median));
        }
        return sum;
    }
};