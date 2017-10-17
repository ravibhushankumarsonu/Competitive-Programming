#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++)
            {
            cin>>a[i];
            sum+=a[i];
        }
        int temp=0,sum2=0;
        for(int i=0;i<n;i++)
            {
            int sum1=sum-sum2-a[i];
       if(sum2==sum1)
           {
           temp=1;
       }
            sum2+=a[i];
        }
        if(temp==1)
            cout<<"YES"<<endl;
        else if(temp==0)
            cout<<"NO"<<endl;
        }
    return 0;
}