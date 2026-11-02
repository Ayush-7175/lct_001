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
//mereko 1 hr 20 mintue laga ke bhi GHNTA SMJH NAHI AYA KI YE QUICK SELECT KARTE KAISE HAI WO BHI MEDIAN NIKALNE KE LIYE LIKE WTF BHYI I NEED LIKE A BINARY SEARCH TYPE SHIT ALONG WITH A PIVOT THAT JUST REQUIRES ALL MY BRAINCELLS TO WORK JUST TO UNDERSTAND FORK U LEETCODE