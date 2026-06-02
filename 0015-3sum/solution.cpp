class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for(int i=0;i<n-2;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            unordered_map<int, int> map;
            int target = -(nums[i]);
            for(int j=i+1; j<n;j++)
            {
                if(map.count(target- nums[j]))
                {
                    vector<int> temp= {nums[i],
                    nums[j],
                    target- nums[j]};

                    sort(temp.begin(), temp.end());
                    res.insert(temp);
                }
                map[nums[j]]+=1;
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
