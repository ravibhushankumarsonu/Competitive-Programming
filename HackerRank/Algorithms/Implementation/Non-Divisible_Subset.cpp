#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin>>n>>k;
    int* arr=new int[k];
    for(int i=0;i<n;i++)
        {
        long long int temp;
        cin>>temp;
        arr[temp%k]++;
    }
    int len=0;
    int i=1,j=k-1;
    while(i<j)
        {
        len+=max(arr[i],arr[j]);
        i++;
        j--;
    }
    if(arr[0]>0)
        len++;
    if(k%2==0)
        {
        if(arr[k/2]>0)
            len++;
    }
    cout<<len<<endl;
    return 0;
}