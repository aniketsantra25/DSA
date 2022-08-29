int isPossible(vector<int> &rank, int m, int mid){
    int time = 0;
    int dish = 0;
    for(int i=0;i<rank.size();i++){
      time = rank[i];
        int j = 2;
        while(time<=mid){
            dish++;
            time += rank[i]*j;
            j++;
        }
        if(dish>=m){
            return true;
        }
    }
    return false;
}
int minCookTime(vector<int> &rank, int m)
{
    // Write your code here
    int s = 0;
    int maxi = -1;
    for(int i=0;i<rank.size();i++){
        maxi = max(maxi, rank[i]);
    }
    int e = m*(m+1)/2*maxi;
    int ans = -1;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(isPossible(rank, m, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
