class Solution {
	public:
	    bool isPrime(int n){
	        if(n<=1)
	            return false;
	        for(int i=2;i*i<=n;i++){
	            if(n%i == 0){
	                return false;
	            }
	        }
	        return true;
	    }
		int NthTerm(int N){
		    // Code here
		    if(isPrime(N)){
		        return 0;
		    }
		    int n1 = N, n2 = N;
		    int greaterPrime=0, lowerPrime=0;
		    while(true){
		        n1++;
		        if(isPrime(n1)){
		            greaterPrime = n1;
		            break;
		        }
		    }
		    while(n2){
		        n2--;
		        if(isPrime(n2)){
		            lowerPrime = n2;
		            break;
		        }
		    }
		    return min(N-n2, n1-N);
		}

};