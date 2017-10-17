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
        lli n,k,b;
        cin>>n>>k>>b;
        //n -Number of strick to buy
        //k-number of boxes for sale
        //b-number of boxes to buy
        if(b>k){
            cout<<-1<<endl;
        }
        lli sum=0;
        vector<lli> a;
        for(lli i=1;i<=b;i++)
        {
            a.push_back(i);
            sum+=i;
        }
        if(sum > n)\
        {
            cout<<-1<<endl;
            continue;
        }
        for(lli i=b-1;i>=0;i--)
        {
            lli temp = min(n-sum , k-(b-1-i)-a[i]);
            sum += temp;
            a[i] += temp;
        }
        if(sum != n){
            cout<<-1<<endl;
            continue;
        }
        for(lli i=0;i<b-1;i++) 
            cout<<a[i]<<" ";
        cout<<a[b-1]<<endl;
        
    }
    return 0;
}
