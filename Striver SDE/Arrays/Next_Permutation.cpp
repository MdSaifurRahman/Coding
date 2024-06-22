class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         if (std::next_permutation(nums.begin(), nums.end())) {
        cout << "Next permutation: ";
    } else {
        cout << "Array is in the highest permutation, reset to lowest permutation: ";
    }
        
    }
};