class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int starting = -1;
        int ending = -1;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==target && starting == -1)
            {
                starting = i;
                ending = i;
            }
            else if(nums[i]==target)
            {
                ending=i;
            }
        }
        return {starting,ending};
    }
};
