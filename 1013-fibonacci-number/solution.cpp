class Solution {
public:
map<int,int> cache;
    int fib(int n) {
        if(n<=1) return n;
        if(cache.find(n)!=cache.end())
        {
            return cache[n];
        }
        else {
            //recurrence
            cache[n]= fib(n-1)+fib(n-2);
            return cache[n];
        }
    }
};
