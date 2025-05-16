class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=n;i>1;i--)
        {
            string in=s;
            int len=in.length();
            for(int i=0;i<len;i++)
            {
                if(in[i]=='1')
                {
                    in[i]='0';
                }
                else
                {
                    in[i]='1';
                }
            }
            reverse(in.begin(),in.end());
            s=s+"1"+in;
        }
        return s[k-1];
    }
};
