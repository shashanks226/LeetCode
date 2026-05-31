class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n= nums.size();
        vector<int> temp(n);
        int i=0,j=n-1, k=n-1;
        while(i<=j)
        {
            int sq1 = nums[i]*nums[i];
            int sq2 = nums[j]*nums[j];
            if(sq1>=sq2)
            {
                temp[k--] = sq1;
                // temp.insert(temp.begin(),sq1);
                i++;
            }
            else
            {
                temp[k--] = sq2;
                // temp.insert(temp.begin(),sq2);
                j--;
            }
        }
        return temp;
    }
};
