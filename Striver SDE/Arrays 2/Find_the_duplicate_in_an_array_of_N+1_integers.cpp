class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // The function takes a vector of integers as input
        
        int n = nums.size(); // Get the size of the vector
        for (int i = 0; i < n; i++) {
            // Loop through each element of the vector
            
            int ind = abs(nums[i]); // Get the absolute value of the current element
            
            // Check if the element at index 'ind' (absolute value of nums[i]) is negative
            if (nums[ind] < 0) {
                // If it is negative, it means we have encountered this number before,
                // and it is the duplicate, so return it
                return ind;
            }
            
            // Otherwise, mark the element at index 'ind' as negative to indicate that
            // we have seen this number
            nums[ind] = -nums[ind];
        }
        
        // If no duplicate is found, return 0
        return 0;
    }
};