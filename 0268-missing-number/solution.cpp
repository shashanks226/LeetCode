class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int k;
        for(int i=0;i<=n;i++)
        {
            int count = 0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]==i)
                {
                    count++;
                }
            }
            if(count==0)
            {
                k= i;
            }
        }
        return k;
    }
};
