class Solution {
public:
    int smallestNumber(int n) {
        string s="";
        while(n>0)
        {
            if(n%2==1)
            {
                s+="1";
            }
            else
            {
                s+="0";
            }
            n/=2;
        }
        int len=s.length();
        int res=1,p=1;
        for(int i=0;i<len-1;i++)
        {
            res+=(p*2);
            p*=2;
        }
        return res;
    }
};
