class Solution {
public:
    int maxProduct(int n) {
        
        vector<int> v;
        
        while(n>0)
        { 
            
            int nigga =n%10;
            v.push_back(nigga);
    
            n=n/10;
            
        }
        sort(v.begin(),v.end());
        int a=v.size();
        int ans=v[a-1]*v[a-2];
        return ans;
        
    }
};