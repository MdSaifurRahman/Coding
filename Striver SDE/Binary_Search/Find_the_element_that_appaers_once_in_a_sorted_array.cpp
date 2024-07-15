class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if (nums[0] != nums[1]) return nums[0];
        if (nums[nums.size() - 1] != nums[nums.size() - 2]) return nums[nums.size() - 1];
        int l=0;
        int r = nums.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]){
                return nums[m];
            }
            else if((m%2==1 && nums[m]==nums[m-1]) || (m%2==0 && nums[m]==nums[m+1])){
                l = m+1;
            } 
            else{
                r = m-1;
            }
        }
        return -1;
    }
};