class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int nindex = 0;
        int zcount = 0;

        int temp = 0;
        for(int i =0; i<n; i++)
        {
            if(nums[i]==0 && zcount <k)
            {
                zcount++;
            }
            else if(nums[i]==0 && zcount ==k)
            {
                zcount++;
                while(zcount>k)
                {
                    if(nums[nindex++] == 0)
                    {
                        zcount--;
                    }
                    temp--;
                }
            }
            temp++;
            ans = max(temp, ans);
        }

        return ans;
    }
};
