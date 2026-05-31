class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                temp=nums[i];
                count++;
            }
            else if(nums[i]==temp)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return temp;
    }
};
