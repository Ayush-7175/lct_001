class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evencount=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&1)==0)
            {   int temp=nums[evencount];
                nums[evencount]=nums[i];
                nums[i]=temp;
                evencount++;
            }
        }
        return nums;
    }
};