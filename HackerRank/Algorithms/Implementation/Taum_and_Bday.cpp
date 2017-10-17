#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    unsigned long long t,b,w,x,y,z,i,j,k,fb,fw;  
   cin>>t;  
   while(t--)
   {  
     cin>>b>>w;  
     cin>>x>>y>>z;  
     fb = b*x;  
     fw = w*y;  
     if(x==y)
     {  
       cout<<fb+fw<<endl;  
     }
   else if(x<y)
   {  
       if((x+z)<y)
       {  
         cout<<((w*x)+(w*z))+fb<<endl;  
       }
       else
       {  
         cout<<fb+fw<<endl;  
       }  
     }
       else
       {  
       if((y+z)<x){  
         cout<<((b*y)+(b*z))+fw<<endl;  
       }
           else
       {  
         cout<<fb+fw<<endl;  
       }  
     }  
   } 
    return 0;
}