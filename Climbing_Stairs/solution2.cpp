class Solution {
public:
    int climbStairs(int n) {
        vector<int> done(n+1, 0);
        
        return verify(n,done);
    }
    
    int verify(int n, vector<int> &done)
    {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        if(n<1)
            return 0;
        if(done[n]!=0)
            return done[n];
        
        done[n] = verify(n-1, done) + verify(n-2, done);
        return done[n];
    }
};