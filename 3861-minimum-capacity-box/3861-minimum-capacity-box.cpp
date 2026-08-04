class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int currentmin=INT_MAX;
        int min=0;
        int anshbodycount=0;
        int ans=-1;
        for(int i=0;i<capacity.size();i++)
        {
            if(capacity[i]>=itemSize)
            {
                min=capacity[i];
                if(currentmin>min)
            {
                currentmin=min;
                ans=i;
            }
            
            }
            
        }
        return ans;
    }
};