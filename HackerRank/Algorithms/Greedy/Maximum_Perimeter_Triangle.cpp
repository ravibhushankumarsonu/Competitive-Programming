#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int lli;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    lli* arr=new lli[n];
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    lli mx=-1;
    lli ans[3];
    ans[0]=ans[1]=ans[2]=0;
    for(int i=0;i<n-2;i++)
        {
        for(int j=i+1;j<n-1;j++)
            {
            for(int k=j+1;k<n;k++)
                {
                if((arr[i]+arr[j])>arr[k]&&(arr[j]+arr[k])>arr[i]&&(arr[i]+arr[k])>arr[j])
                    {
                   if(mx<=(arr[i]+arr[j]+arr[k])){
                       mx=arr[i]+arr[j]+arr[k];
                       ans[0]=arr[i];
                       ans[1]=arr[j];
                       ans[2]=arr[k];
                   }
                }
            }
        }
    }
    sort(ans,ans+3);
    if(mx==-1)
        cout<<-1<<endl;
    else
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    return 0;
}