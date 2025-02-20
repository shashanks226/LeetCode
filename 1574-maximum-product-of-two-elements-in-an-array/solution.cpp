class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int> maxHeap;
        for(int i=0;i<n;i++)
        {
            maxHeap.push(nums[i]);
        }
        int greatest = maxHeap.top();
        maxHeap.pop();
        int secondgreatest = maxHeap.top();
        return (greatest - 1)*(secondgreatest - 1);
    }
};
