// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,current;
        
        while(l<=r)
        {
            current = l + (r - l) / 2; 
            
            if(isBadVersion(current) && !isBadVersion(current-1))
                return current;
            if(!isBadVersion(current)&&isBadVersion(current+1))
                return current+1;
            
            if(isBadVersion(current))
                r=current-1;
            else
                l=current+1;
            
        }
        return 1;
    }
};