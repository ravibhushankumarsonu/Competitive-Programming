#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,q;
    cin>>n>>k>>q;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    k=k%n;
    int* ans=new int[n];
    int j=0;
    for(int i=k;i<n;i++)
    {
        ans[i]=arr[j];
        j++;
    }
    for(int i=0;i<k;i++)
        {
        ans[i]=arr[j];
        j++;
    }
    while(q--)
        {
        int m;
        cin>>m;
        cout<<ans[m]<<endl;
    }
    return 0;
}