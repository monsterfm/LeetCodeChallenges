class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0)
            return INT_MIN;
        
        int maxTotal=nums[0],sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum = max(sum + nums[i], nums[i]);
            maxTotal = max(maxTotal, sum);
        }
        return maxTotal;
    }
};