class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i=0; i<numRows; i++)
        {
            vector<int> newAdd;
            for(int j=0; j<i+1; j++)
            {
                (j-1>=0 && j<i)? newAdd.push_back(res[i-1][j]+res[i-1][j-1]):newAdd.push_back(1);
            }
            res.push_back(newAdd);
        }
        return res;
    }
};