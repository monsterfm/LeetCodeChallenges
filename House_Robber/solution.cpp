class Solution {
public:
    int rob(vector<int>& nums) {
        int firstAfter = 0,secondAfter = 0, current=0;
        for (int i = 0; i < nums.size(); i++)
        {
            current = max(firstAfter + nums[i], secondAfter);
            firstAfter = secondAfter;
            secondAfter = current;
        }
        return secondAfter;
    }
};