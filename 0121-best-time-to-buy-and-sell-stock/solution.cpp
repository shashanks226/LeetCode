class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int min=prices[0];
        for(int i=1;i<prices.size();i++)
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
