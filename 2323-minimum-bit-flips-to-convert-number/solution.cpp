class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a= start^goal;
        int count=0;
        while(a!=0)
        {
            a=a&(a-1);
            count++;
        }
        return count;
    }
};
