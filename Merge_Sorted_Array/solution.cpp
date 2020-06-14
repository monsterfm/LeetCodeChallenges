class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        
        if(n==0 )
            return;
        
        while(j<n)
        {
            if(nums1[i]==nums2[j])
            {
                nums1.insert(nums1.begin()+i+1, nums2[j]);
                j++;
                i++;
            }
            else if(nums2[j]<nums1[i] || (i+1>m+j && i<nums1.size()) || m==0)
            {
                nums1.insert(nums1.begin()+i,nums2[j]);
                j++;
                i++;
            }
            else
                i++;
        }
        int size=nums1.size();
        for(int k=0; k<size-n-m;k++)
            nums1.pop_back();
    }
};