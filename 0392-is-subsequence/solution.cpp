class Solution {
public:
    bool isSubsequence(string s, string t) {
        int curr=0,count=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=curr;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    curr=j+1;
                    count++;
                    break;
                }
            }
        }
        if(count!=s.length())
        {
            return false;
        }
        return true;
    }
};
