class Solution {
public:
    bool isPowerOfThree(int n) {
        int powerOfThree=1;
        
        if(n==1)
            return true;
        
        while(powerOfThree<n)
        {
            if(powerOfThree>INT_MAX/3)
                return false;
            
            powerOfThree*=3;
            if(powerOfThree==n)
                return true;
        }
        
        return false;
    }
};