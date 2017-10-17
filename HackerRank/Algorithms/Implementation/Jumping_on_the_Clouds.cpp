#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sol(int* arr1,int n)
    {
    int* arr=new int[n];
    if(n==1)
        return 0;
    if(n==2)
       {
        if(arr[1]==1)
            return -1;
        else 
            return 1;
    }
    arr[0]=0;
    arr[1]=(arr1[1]==1)?-1:1;
    for(int i=2;i<n;i++)
        {
        if(arr1[i-1]==1&&arr1[i-2]==1)
            return -1;
        if(arr1[i-1]==1)
            arr[i]=arr[i-2]+1;
        else if(arr1[i-2]==1)
            arr[i]=arr[i-1]+1;
        else
            {
            arr[i]=min(arr[i-1]+1,arr[i-2]+1);
        }
    }
    return arr[n-1];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int* arr1=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
   int ans=sol(arr1,n);
    cout<<ans<<endl;
    return 0;
}