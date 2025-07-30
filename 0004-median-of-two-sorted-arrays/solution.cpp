class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        vector<int> sor(n+m,0);
        int p=sor.size();
        int x=0,y=0;
        for(int i=0;i<p;i++)
        {
            if(x>=n)
            {
                sor[i]=nums2[y];
                y++;
            }
            else if(y>=m)
            {
                sor[i]=nums1[x];
                x++;
            }
            else if(nums1[x]<=nums2[y] )
            {
                sor[i]=nums1[x];
                x++;
            }
            else
            {
                sor[i]=nums2[y];
                y++;
            }
        }
        double median;
        if(p%2==0)
        {
            median= (sor[p/2] + sor[p/2-1]) /2.0;
        }
        else
        {
            median= sor[p/2];
        }
        return median;
    }
};
