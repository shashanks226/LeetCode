class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n-1;

        while(i<=j)
        {
            char a = tolower(s[i]);
            char b = tolower(s[j]);
            if((a<'a' || a>'z') && (b<'a' || b>'z') && (a<'0' || a>'9') && (b<'0' || b>'9'))
            {
                i++;
                j--;
                continue;
            }
            else if((a<'a' || a>'z') && (a<'0' || a>'9'))
            {
                i++;
                continue;
            }
            else if((b<'a' || b>'z') && (b<'0' || b>'9'))
            {
                j--;
                continue;
            }
            if(a != b)
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
