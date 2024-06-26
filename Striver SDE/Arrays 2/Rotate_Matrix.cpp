class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix.size(); ++j) {
            // Swap element at (i, j) with element at (j, i)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
        for(int i = 0;i<matrix.size();i++){
            int l=0,r=matrix.size()-1;
            while(l<r){
                swap(matrix[i][l],matrix[i][r]);
                l+=1,r-=1;
            }
        }
    }
};