class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxOne = 0;
	    int index = -1;
	    for(int i=0;i<n;i++){
	        int countOne = 0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j] == 1){
	                countOne++;
	            }
	        }
	        if(maxOne<countOne){
	            maxOne = countOne;
	            index = i;
	        }
	        
	    }
	    return index;
	}

};