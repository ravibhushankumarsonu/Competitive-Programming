#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int s,n,m;
    cin>>s>>n>>m;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=-1;
    for(int i=0;i<m;i++)
        {
        int temp;
        cin>>temp;
        for(int j=0;j<n;j++)
            {
            if((temp+arr[j])>ans&&(temp+arr[j])<=s)
                {
                ans=temp+arr[j];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}