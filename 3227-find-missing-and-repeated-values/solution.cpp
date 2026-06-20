class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long m=n*n;
        long long sum = 0, ssum = 0;
        long long esum = (m*(m+1))/2;
        long long essum = (m*(m+1)*(2*m+1))/6;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum += grid[i][j];
                ssum += grid[i][j]*grid[i][j];
            }
        }

        long long d = sum - esum;
        long long sd = ssum - essum;
        long long s = sd/(d);
        int x = (s+d)/2;
        int y = -(d-x);

        return {x,y};
    }
};
