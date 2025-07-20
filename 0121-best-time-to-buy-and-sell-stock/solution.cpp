class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int min=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            if(prices[i]-min>mp)
            {
                mp=prices[i]-min;
            }
        }
        return mp;
    }
};
