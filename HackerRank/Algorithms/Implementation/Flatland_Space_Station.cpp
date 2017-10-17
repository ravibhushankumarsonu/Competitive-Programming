#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a,int b)
    {
    return (a>b)?a:b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    cin>>n>>m;
    int* arr1=new int[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    sort(arr1,arr1+m);
    int mxa=arr1[0];
    for(int i=1;i<m;i++)
        {
         // cout<<mxa<<" ";
        int temp=ceil((arr1[i]-arr1[i-1]-1)/2.0);
        
         mxa=max(temp,mxa);
         
    }
     mxa=max(((n-1)-arr1[m-1]),mxa);
    cout<<mxa<<endl;
    return 0;
}