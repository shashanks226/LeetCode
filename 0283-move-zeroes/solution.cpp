class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int j=0,i=0;i<n;i++)
        {
            if(nums[j]!=0)
            {
                j++;
                continue;
            }
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                nums[i]=0;
                j++;
            }
        }
    }
};
