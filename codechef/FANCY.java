/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Solution
{
    public static final String CHECK_VALUE = "not";
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Solution sol = new Solution();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = (int)(Integer.parseInt(br.readLine()));
        while(t>0) {
            sol.solve(br);
            t--;
        }
	}

	public void solve(BufferedReader br) throws Exception{
		//Your main logic goes here
		String[] arr = br.readLine().split(" ");
            boolean flag = false;
            for(int i=0; i<arr.length ; i++){
                if(arr[i].equalsIgnoreCase(CHECK_VALUE)){
                    flag=true;
                }
            }
            if(flag) {
                System.out.println("Real Fancy");
            }else {
                System.out.println("regularly fancy");
            }
	}
}