class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> num2m;
        vector<int> res;
        for(int i=0;i<nums2.size();i++)
        {
            num2m[nums2[i]] += 1;
        }
        for(int i=0;i<nums1.size(); i++)
        {
            if(num2m.count(nums1[i]) && num2m[nums1[i]] >0 )
            {
                res.push_back(nums1[i]);
                num2m[nums1[i]] =0;
            }
        }
        return res;
    }
};
