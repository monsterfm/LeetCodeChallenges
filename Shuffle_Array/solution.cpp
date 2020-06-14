class Solution {
public:
    Solution(vector<int>& nums) {
        num=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this->num;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> numShuffled(this->num);
        random_shuffle ( numShuffled.begin(), numShuffled.end() );
        return numShuffled;
    }
    
private:
    vector<int> num;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */