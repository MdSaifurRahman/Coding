class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int j=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[j]){
               res = max(res , prices[i]-prices[j]); 
            }
            else{
                j=i;
            }
        }
        return res;

    }
};