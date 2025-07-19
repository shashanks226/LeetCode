class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count;
        for(int i=0;i<=n;i++)
        {
            int j=i;
            int oc=0;
            while(j>=1)
            {
                if(j%2==1)
                {
                    oc++;
                }
                j/=2;
            }
            count.push_back(oc);
        }
        return count;
    }
};
