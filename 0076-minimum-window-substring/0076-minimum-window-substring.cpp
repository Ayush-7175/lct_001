class Solution {
public:
    string minWindow(string s, string t) {
        int st=-1;
        int count=0;
        int high=0;
        int low=0;
        int m = t.length();
        unordered_map<char,int> f;
        int minlen=INT_MAX;
        for(int i=0;i<t.length();i++)
        {
            f[t[i]]++;

        }
        while(high<s.length())
    {
        if(f[s[high]]>0)
        {
            count++;
        }
        f[s[high]]--;
        while(count==m)
        {
            if(high-low+1<minlen)
            {
                minlen=high-low+1;
                st=low;
            }
            f[s[low]]++;
            if(f[s[low]]>0)
            {
                count--;
            }
            low++;
        }
        high++;
    }
    return (st == -1) ? "" : s.substr(st, minlen);

        
    }
};