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
        int n,m;
        cin>>n>>m;
        if((n%2==0)||(m==1))
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}