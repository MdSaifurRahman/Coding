class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target<=matrix[i][n-1]){
                int l=0,r=n-1;
                while(l<=r){
                    int m=l+(r-l)/2;
                    if (matrix[i][m]==target){
                        return true;
                    }
                    else if(matrix[i][m]>target){
                        r=m-1;
                    }
                    else{
                        l=m+1;
                    }
                }
            }
        }
        return false;
        
    }
};