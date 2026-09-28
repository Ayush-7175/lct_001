class Solution {
public:
    int maxDepth(string s) {
        int r=0;
        int ans=0;
        for (char c : s) {
            if (c == ')') {
                ans--;
                continue;
            }
        
            if(c!='(') 
            continue;
            ans++;
            if(ans>r)
            {
                r=ans;
            }
        }
            return r;
        
        
    }
};