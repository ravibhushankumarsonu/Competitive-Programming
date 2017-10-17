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
        long int n,m,s;
        cin>>n>>m>>s;
        long int pivot=m%n;
        if(pivot==0)
            pivot=n;
        long int id=(s+pivot-1)%n;
        if(id==0)
            cout<<n<<endl;
        else
            cout<<id<<endl;
    }
    return 0;
}