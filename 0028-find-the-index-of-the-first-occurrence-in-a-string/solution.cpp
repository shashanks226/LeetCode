class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.length();
        int n2=needle.length();
        for(int i=0;i<n1;i++)
        {
            if(haystack[i]==needle[0])
            {
                int match=0;
                for(int j=i,k=0;j<n1 && k<n2;j++,k++)
                {
                    if(haystack[j]==needle[k])
                    {
                        match++;
                    }
                }
                if(match==n2)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
