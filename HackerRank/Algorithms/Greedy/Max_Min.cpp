#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define INT_MAX 1000000001
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
   int ans=INT_MAX;
    for(int i=0;i<n-k+1;i++)
        {
        ans=min(ans,(arr[i+k-1]-arr[i]));
    }
    cout<<ans<<endl;
    return 0;
}