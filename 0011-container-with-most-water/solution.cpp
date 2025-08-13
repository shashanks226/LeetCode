class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int amount = 0;
        for(int i=0,j=n-1;i<=j;)
        {
            int temp= min(height[i],height[j])*(j-i);
            if(temp>amount)
            {
                amount=temp;
            }
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return amount;
    }
};
