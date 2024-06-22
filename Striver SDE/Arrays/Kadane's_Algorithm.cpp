class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c=0,m=nums[0];
        for(int i=0;i<size(nums);i++){
            if(c<0){
                c=0;
            }
            c+=nums[i];
            m=max(c,m);
        }
        return m;
        
    }
};