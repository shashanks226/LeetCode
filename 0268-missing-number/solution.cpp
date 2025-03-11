class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++)
        {
            arr[nums[i]]+=1;
        }
        for(int i=0;i<=n;i++)
        {
            if(arr[i]<1)
            {
                return i;
            }
        }
        return 0;
    }
};
