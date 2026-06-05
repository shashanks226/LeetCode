class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1, k = n - 1; k > j;) 
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) 
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    while(k>j && nums[j] == nums[j+1]) j++;
                    while(k>j && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                } 
                else if (sum < 0) 
                {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return res;
    }
};
