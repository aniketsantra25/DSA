class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int row=0;row<rows;row++){
            for(int col=row+1;col<cols;col++){
                swap(matrix[row][col], matrix[col][row]);
            }
        }
         for(int row=0;row<rows;row++){
            for(int col=0;col<cols/2;col++){
                swap(matrix[row][col], matrix[row][cols-col-1]);
            }
        }
        
    }
};