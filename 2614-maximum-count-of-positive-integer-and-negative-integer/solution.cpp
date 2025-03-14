class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();  // Count of negative numbers
        int pos = nums.end() - upper_bound(nums.begin(), nums.end(), 0);   // Count of positive numbers
        return max(neg, pos);
    }
};
