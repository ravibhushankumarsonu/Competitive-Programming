/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
url : http://codeforces.com/problemset/problem/368/A
*/

import java.util.Scanner;
import java.util.Arrays;
class Solution{
    public static void main(String args[]){
        //Sample code goes here
        Scanner in =new Scanner(System.in);
        int n=in.nextInt();
        int d=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        int m=in.nextInt();
        Arrays.sort(arr);
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]+arr[i];
        }
        if(m<=n){
            System.out.println(arr[m-1]);
        }else{
            System.out.println(arr[n-1]-(m-n)*d);
        }
    }
}