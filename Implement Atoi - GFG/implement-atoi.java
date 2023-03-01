//{ Driver Code Starts
//Initial template for JAVA

import java.util.Scanner;

class aToi
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			
			Solution obj = new Solution();
			System.out.println(obj.atoi(str));
		t--;
		}
	}
}
// } Driver Code Ends


//User function template for JAVA

/*You are required to complete this method */

// } Driver Code Ends


//User function template for JAVA

/*You are required to complete this method */
//User function template for JAVA

/*You are required to complete this method */
class Solution
{
    public static boolean secvalid(String s){
        //boolean flag=false;
        int count=0;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)=='-'){
                count++;
            }
        }
        
        //System.out.println(count);
        
        if(count>0){
            return false;
        }
        return true;
    }
    public static boolean isvalid(String s) {
		boolean flag=true;
		for(int i=0;i<s.length();i++) {
			int asci=(int) s.charAt(i);
			if((asci>=48&&asci<=57)||asci==45) {
				continue;
			}else {
				flag=false;
				break;
			}
		}
		return flag;
	}
	
	public static int atoi(String s,int i,int ans,int n) {
		if(i>=n) {
			return ans;
		}
		if(isvalid(s)) {
				char temp=s.charAt(i);
				//System.out.println(temp);
				ans=ans*10+(temp-'0');
				//System.out.println(i);
				//System.out.println(ans);
				return atoi(s,i+1,ans,n);
			}	
		return -1;
	}


    int atoi(String str) {
        int ans=0;
        if(secvalid(str)){
           if(str.charAt(0)=='-') {
		   int t=atoi(str.substring(1),0,ans,str.length()-1);
		   if(t!=-1)
		    return t*(-1);
		   else
		    return -1;
		}
		else {
			return atoi(str,0,ans,str.length());
		} 
        }
        else{
            return -1;
        }
		
    }
}