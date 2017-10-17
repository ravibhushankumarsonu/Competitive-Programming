#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
        {
        long int a, b,sum=0;
        double i,j;
        cin>>a>>b;
        i=sqrt(a);
        j=sqrt(b);
            cout<<floor(j)-ceil(i)+1<<endl;
    }
    return 0;
}