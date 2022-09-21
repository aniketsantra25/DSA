#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //Base Case
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }
    
    // recursive call
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}