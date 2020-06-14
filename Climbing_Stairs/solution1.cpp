class Solution {
public:
    int climbStairs(int n) {
        vector<int> done(n+1, 0);
        done[0] =1;
        done[1]=2;
        
        for(int i=2; i<n; i++)
        {
            done[i] = done[i-1]+done[i-2];
        }
        
        return done[n-1];
    }
};