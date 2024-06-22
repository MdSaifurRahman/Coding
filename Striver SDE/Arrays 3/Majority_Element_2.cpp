class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq; // Map to contain <element,frequency>
        vector<int> res; // Result Array
        for(int i=0;i<size(nums);i++){
            freq[nums[i]]++; //Increaing the count for that particular element
        }
        for(auto i: freq){
            if(i.second>size(nums)/3){// Checking if frequecncy[i] is greater than n/3
                res.push_back(i.first); 
            }
        }
        return res;
    }
};