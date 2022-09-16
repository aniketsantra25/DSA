class Solution {
public:
    void Rotate(vector<vector<int>> &mat){
        int rows = mat.size();
        int cols = mat[0].size();
        for(int i=0;i<rows;i++){
            for(int j=i+1;j<cols;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
    for(int i=0;i<rows;i++){
            for(int j=0;j<cols/2;j++){
                swap(mat[i][j], mat[i][cols-j-1]);
            }
        }
    }
    bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target){
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=target[i][j])
                    return false;
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int count=0;count<4;count++){
            Rotate(mat);
            if(isEqual(mat,target)){
                return true;
            }
        }
        return false;
        
    }
};