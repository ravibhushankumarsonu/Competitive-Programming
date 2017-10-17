#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k;
    cin>>n>>k;
    long int sum=0;
    for(int i=0;i<n;i++)
        {
        int t;
        cin>>t;
        if(i!=k)sum+=t;
    }
    sum=sum/2;
    long int sd;
    cin>>sd;
    long int ans=sd-sum;
    if(ans<=0)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<ans<<endl;
    return 0;
}