#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n)
    {
    bool arr[n+1];
    for(int i=0;i<=n;i++)
        arr[i]=true;
    for(int i=2;i*i<=n;i++)
        {
        if(arr[i]==true)
            {
            for(int p=i*2;p<=n;p+=i)
                arr[p]=false;
        }
    }
    int ans=0;
    for(int i=2;i<=n;i++)
        {
        if(arr[i]==true)
            ans++;
    }
    return ans;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int* arr=new int[n+1];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        arr[3]=1;
        arr[4]=2;
        for(int i=5;i<n+1;i++)
            arr[i]=arr[i-1]+arr[i-4];
        int number=arr[n];
        int ans=solve(number);
        cout<<ans<<endl;
        
    }
    return 0;
}