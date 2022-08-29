bool isPossible(vector<int> &boards, int k, int mid){
    int painterCount = 1;
    int length = 0;
    for(int i=0; i<boards.size(); i++){
        if(length + boards[i] <= mid){
            length += boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i] > mid){
                return false;
            }
            length = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = 0;
    int totalLength = 0;
    for(int i = 0; i < boards.size(); i++){
        totalLength += boards[i];
    }
    int e = totalLength, ans = -1;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(isPossible(boards, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}