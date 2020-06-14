class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> myBitset = n;
        return myBitset.count();
    }
};