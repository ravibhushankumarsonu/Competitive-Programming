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
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int ans=0;
    int temp=1;
    for(int i=1;i<n;i++)
        {
        if(arr[i]==arr[i-1])
            {
            temp++;
        }
        else
            {
            ans+=temp/2;
            temp=1;
        }
    }
    ans+=temp/2;
    cout<<ans<<endl;
    return 0;
}