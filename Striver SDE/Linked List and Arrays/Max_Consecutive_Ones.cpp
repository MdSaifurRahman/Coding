class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,m = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                c=0;
            }
            else{
                c++;
                m = max(m,c);
            }
        }
        return m;
    }
};