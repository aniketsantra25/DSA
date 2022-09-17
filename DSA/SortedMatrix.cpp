class Solution {
  public:
    vector<vector<int>> sortedMatrix(int n, vector<vector<int>> Mat) {
        // code here
        int temp[n*n];
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[k++] = Mat[i][j];
            }
        }
        sort(temp, temp+k);
        k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Mat[i][j] = temp[k++];
        }
    }
    return Mat;
    }
};