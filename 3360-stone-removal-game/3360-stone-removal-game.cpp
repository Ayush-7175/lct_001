class Solution {
public:
    bool canAliceWin(int n) {
        int count=0;
        if(n<10)
        {
            return false;
        }
        int ans=10;
        n=n-ans;
        while(n>0)
        {
            
            ans--;
            n=n-ans;
            if(n>=0)
            {count++;}
            
        }
        if(count%2==0)
    {
        return true;
    }
    else{
        return false;
    }
            
    }
    
};