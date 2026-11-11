class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      int p1=0;
      int p2=1;
      while(p1<nums.size()&&p2<nums.size())
      {
        
        if((nums[p1]&1)==0)
        {

            p1+=2;
        }
        else if ((nums[p2]&1)==1)
        {
           
            p2+=2;
        }
        else{
            swap(nums[p1],nums[p2]);
             p1+=2;
              p2+=2;
        }
      }  
      return nums;
    }
};