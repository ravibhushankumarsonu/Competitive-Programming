#include <cmath>  
#include <cstdio>  
#include <vector>  
#include <iostream>  
#include <algorithm>  
using namespace std;  
int main() {     
  int arr[500][500],n,m,i,j,k,p=0,t=0;  
  char val[600][600];  
  cin>>n>>m;  
  for(i=0;i<n;i++){  
    cin>>val[i];      
  }  
  int tp = 0,tt = 0,flag =0;  
  for(i=0;i<n;i++)
  {  
    for(j=i+1;j<n;j++)  
      {  
      flag = 0;  
      tp = 0;  
      for(k=0;k<m;k++){  
        int x,y;  
        x = val[i][k]-48;  
        y = val[j][k]-48;   
        if(x|y){  
          tp++;  
        }  
      }  
      if(tp== p)
      {  
        tt++;  
      }  
      if(tp>p){  
        p=tp;  
        tt= 1;  
      }  
    }  
  }  
  cout<<p<<endl<<tt<<endl;  
  return 0;  
}