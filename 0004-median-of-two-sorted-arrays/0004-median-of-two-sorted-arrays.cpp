class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
         vector<int> res;
        int i=0;
        int j=0;
        while(i<m&&j<n)
        {
            if(nums1[i]>=nums2[j])
            {
                res.push_back(nums2[j]);
                j++;
            }

            else
            {
                res.push_back(nums1[i]);
                i++;
            }
        }
          while(i<m)
          {
            res.push_back(nums1[i]);
            i++;
          }

          while(j<n)
          {
            res.push_back(nums2[j]);
            j++;
          }
          
        
        int a =res.size();
        if(a%2==1)
        {
            return res[a/2];
        }
        else{
            return (res[(a / 2) - 1] + res[a / 2]) / 2.0;
        }
        
        


        
    }
};