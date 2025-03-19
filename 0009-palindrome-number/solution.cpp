class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else if (x==0)
        {
            return true;
        }
        int z=x;
        int y=0;
        for(int i=0;z>=1;i++)
        {
            if(INT_MAX/10<=y+(z%10))
            {
                return false;
            }
            y = y*10+(z%10);
            z=z/10;
        }
        if(x==y)
        {
            return true;
        }
        else return false;
    }
};
