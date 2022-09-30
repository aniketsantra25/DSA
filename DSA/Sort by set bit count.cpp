class Solution{
    public:
    static int countBits(int a){
        int count = 0;
        while(a){
            a = a & (a-1);
            count++;
        }
        return count;
    }
    static int cmp(int a, int b){
        int count1 = countBits(a);
        int count2 = countBits(b);
        if(count1<=count2){
            return false;
        }
        return true;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        stable_sort(arr, arr+n, cmp);
    }
};