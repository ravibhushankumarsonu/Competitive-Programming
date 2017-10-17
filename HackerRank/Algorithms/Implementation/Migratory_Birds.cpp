#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int>arr(6,0);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    int l=0;
    int ans=0;
    for(int i=1;i<6;i++)
        {
        if(arr[i]>l)
            {
            ans=i;
            l=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
