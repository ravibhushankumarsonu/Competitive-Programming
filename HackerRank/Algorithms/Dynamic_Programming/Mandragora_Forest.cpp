#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        lli sum=0;
        lli* arr=new lli[n];
        for(int i=0;i<n;i++)
            {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        //s=1
        //p=0
        //if no increment in s
        lli ans=sum;
        lli temp=sum;
        for(int i=1;i<n;i++)
            {
            temp-=arr[i-1];
            lli m=(i+1)*temp;
            if(m<ans)
                {
                break;
            }
            ans=max(ans,m);
        }
        cout<<ans<<endl;
    }
    return 0;
}