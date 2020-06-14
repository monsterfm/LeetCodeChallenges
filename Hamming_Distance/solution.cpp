class Solution {
public:
    int hammingDistance(int x, int y) {
        return hammingWeight(x^y);
    }
    
    int hammingWeight(uint32_t n) {
        int x =n;
        const uint64_t m1  = 0x5555555555555555;
        const uint64_t m2  = 0x3333333333333333;
        const uint64_t m4  = 0x0f0f0f0f0f0f0f0f;
        const uint64_t m8  = 0x00ff00ff00ff00ff; 
        const uint64_t m16 = 0x0000ffff0000ffff; 
        x = (x & m1 ) + ((x >>  1) & m1 );
        x = (x & m2 ) + ((x >>  2) & m2 );
        x = (x & m4 ) + ((x >>  4) & m4 ); 
        x = (x & m8 ) + ((x >>  8) & m8 ); 
        x = (x & m16) + ((x >> 16) & m16);
        
        return x;
    }
};