class Solution {
public:
    int countPrimes(int n) {
        int res=1;
        bool isPrime=true;
        
        if(n<3)
            return 0;
        
        for(int i=3; i<n; i+=2)
        {
            for(int j=3; j<=sqrt(i); j+=2)
            {
                if(i%j==0)
                {
                    isPrime=false;
                    break;
                }
                    
            }
            if(isPrime)
                res++;
            isPrime=true;
        }
        
        return res;
    }
};