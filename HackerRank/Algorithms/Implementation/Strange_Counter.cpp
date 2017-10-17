#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int lli;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    lli t;
    cin>>t;
    lli n=floor(log2((t/3)+1));
    //cout<<n<<endl;
    lli temp=3*(pow(2,n)-1);
    lli value=3*pow(2,(n-1));
    //cout<<temp<<endl;
    if(t<=3)
        {
        cout<<(3-t+1)<<endl;
    }
    else if(temp==t)
        cout<<1<<endl;
    else
        {
        cout<<(value*2-(t-temp)+1)<<endl;
    }
    return 0;
}