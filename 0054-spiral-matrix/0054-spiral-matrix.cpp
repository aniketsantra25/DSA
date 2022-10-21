class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row*col;
        
        //index initialisation
        
        int startRow = 0;
        int startCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        while(count<total){
            //for starting row
            for(int index = startCol; count<total && index <= endingCol; index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;
            
            // for ending col
            for(int index = startRow; count<total && index <= endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //for endingRow
            for(int index = endingCol; count<total && index >= startCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //for starting col
            for(int index = endingRow; count<total && index >= startRow; index--){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};