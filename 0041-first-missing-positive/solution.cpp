class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        
        for(int i = 0; i<n; i++)
        {
            int temp;
            if(nums[i] == i+1) continue;
            if(nums[i] <= n  && nums[i] > 0 && nums[nums[i] - 1] != nums[i])
            {
                temp = nums[nums[i] - 1];
                nums[nums[i] - 1] = nums[i];
                nums[i] = temp;
                i--;
            }
        }
        int ans = 1;
        for(int i = 0;i<n ;i++)
        {
            if(nums[i] != i+1)
            {
                ans = i+1;
                break;
            }
            else if(nums[i] == i+1)
            {
                ans++;
            }
        }
        return ans;
    }
};
