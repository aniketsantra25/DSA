class Solution {
public:
    bool isEqual(int count1[], int count2[]){
        for(int i=0;i<26;i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        //traverse s2 string with size s1 length and compare
        int i=0;
        int windowSize = s1.length();
        int count2[26] = {0};
        //traversing the window for 1st time
        while(i<windowSize && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if(isEqual(count1, count2)){
            return true;
        }
        
        //traversing the window
        while(i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            char oldChar = s2[i-windowSize];
            int oldIndex = oldChar - 'a';
            count2[oldIndex]--;
            i++;
            if(isEqual(count1, count2)){
                return true;
            }
        }
        return false;
        
    }
};