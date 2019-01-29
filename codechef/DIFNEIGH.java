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
	public static void prt(int[][] ar , int n , int m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(ar[i][j]+" ");
            }
            System.out.println();
        }
    }


    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int tc = 0 ;tc<t ;tc++){
            int n = in.nextInt();
            int  m = in.nextInt();
            int[][] ar = new int[n][m] ;
            int k=4;
            if(n==1&&m==1)k =1 ;
            else if(n==1 || m ==1)k = 2 ;
            else if(n==2&&m==2)k=2 ;
            else if(n==2||m==2)k=3 ;

            if(n==1&&m==2){
                   System.out.println(1);
                   System.out.println(1+" "+1);
            }
            else if(n==2&&m==1){
               System.out.println(1);
               System.out.println(1);
               System.out.println(1);

            }
            else if(k==1){System.out.println(1); System.out.println(1);}

            else if(k==2){
                System.out.println(2);
                if(n==2&&m==2){
                System.out.println(1+" "+2);
                System.out.println(1+" "+2);}
                else{
                    if(n>m){
                        int c =0 ;
                        for(int i=0;i<n;i++){
                             if(c==0){c++;System.out.println(1);}
                             else if(c==1){c++; System.out.println(1);}
                             else if(c==2){c++; System.out.println(2);}
                             else if(c==3){c=0; System.out.println(2);}
                        }
                    }
                    else{
                        int c=0;
                        for(int i=0;i<m;i++){
                            if(c==0){c++;System.out.print(1+" ");}
                            else if(c==1){c++;System.out.print(1+" ");}
                            else if(c==2){c++ ; System.out.print(2+" ");}
                            else if(c==3){c=0 ; System.out.print(2+" ");}
                        } System.out.println();
                    }
                }
            }
            else if(k==3){
                System.out.println(3);
                 if(n>m){
                      int  c=1;
                      for(int j=0;j<n;j++){
                          System.out.println(c+" "+c);
                          c++ ;
                          if(c==4)c = c% 3 ;
                       }
                     }


                 else{
                     int temp=1 ;
                     for(int j=0;j<m;j++){
                        if(temp==4)temp=temp%3 ;
                        ar[0][j] = temp ;
                        ar[1][j] = temp ;
                        temp++ ;
                     }
                   prt(ar,n,m);
                 }

            }
            else if(k==4){
                System.out.println(4);
                int temp=1 ;
                for(int j=0;j<m;j++){
                    if(temp==5)temp=temp%4 ;
                    ar[0][j] = temp ;
                    ar[1][j] = temp ;
                    temp++ ;
                }
                for(int i = 2 ;i<n;i++){
                    for(int j= 1;j<m-1;j++){
                       HashSet<Integer> hs = new HashSet<>();
                       hs.add(ar[i-1][j+1]);
                       hs.add(ar[i-1][j-1]);
                       hs.add(ar[i-2][j]);
                       int col = 1;
                       while(true){
                         if(hs.contains(col))
                            col++ ;
                        else{ar[i][j]=col ;break ;}
                       }

                    }
                    int t1=0,t2=0 ;
                    t1 = ar[i][1]-1 ;
                    t2 = ar[i][m-2]+1 ;
                    if(t1==0)t1 = 4 ;
                    if(t2==5)t2 = 1 ;
                    ar[i][0] = t1 ;
                    ar[i][m-1] =t2 ;
                }
                prt(ar,n,m);

            }





        }
    }
}