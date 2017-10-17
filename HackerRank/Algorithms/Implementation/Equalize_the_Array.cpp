#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int fre=0;
    int arr[101];
    for(int i=0;i<101;i++)
        arr[i]=0;
    for(int i=0;i<n;i++)
        {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    for(int i=0;i<101;i++)
        {
        if(arr[i]>fre)
            fre=arr[i];
    }
   // cout<<fre<<endl;
    int ans=n-fre;
    cout<<ans<<endl;
    return 0;
}