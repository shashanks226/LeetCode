class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int b=0;
        for(int i =0; i<k; i++)
        {
            b += cardPoints[i]; 
        }
        int sum = b;
        for(int i =0; i<k; i++)
        {
            b = b + cardPoints[n-i-1] - cardPoints[k-i-1];

            if(b>sum)
            {
                sum = b;
            }
        }

        return sum;
    }
};
