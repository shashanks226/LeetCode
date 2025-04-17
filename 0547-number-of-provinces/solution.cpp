class DSU{
    private:
    vector<int>par,rank;
    public:
    DSU(int n){
        par.resize(n+1);
        rank.resize(n+1,0);
        for(int i =0;i<n+1;i++)par[i]=i;
    }
    int Parent(int x){
        if(x==par[x])return x;
        // path compression
        return par[x]=Parent(par[x]);
    }
    void Union(int x,int y){
        int upx = Parent(x);
        int upy = Parent(y);
        if(upx==upy)return;
        int rx = rank[upx];
        int ry = rank[upy];
        if(rx==ry){
            par[upx]=upy;
            rank[upy]++;
        }
        else if(rx>ry){
            par[upy]=upx;
        }
        else{
            par[upx]=upy;
        }
    }
    int countComZeroBased(int n){
        // here is zero
        int ans = 0;
        for(int i =0;i<n;i++){
            if(par[i]==i)ans++;
        }
        return ans;
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& a) {
        int n = a.size();
        DSU obj(n);
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==1)obj.Union(i,j);
            }
        }
        return obj.countComZeroBased(n);
    }
};
