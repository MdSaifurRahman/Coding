class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2){
            return nums.size();
        }
        int c=1,m=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]){
                c++;
            }
            else if(nums[i-1]==nums[i]){
                continue;
            }
            else{
                c=1;
            }
            m = max(c,m);
        }
        return m;
        
    }
};