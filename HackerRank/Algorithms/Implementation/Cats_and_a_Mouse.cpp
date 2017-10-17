#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    while(q--)
        {
        int x,y,z;
    cin>>x>>y>>z;
    int ca=abs(z-x);
    int cb=abs(z-y);
    if(ca==cb)
        {
        cout<<"Mouse C"<<endl;
    }
    else if(ca>cb)
        {
        cout<<"Cat B"<<endl;
    }
    else{
        cout<<"Cat A"<<endl;
    }
    }
    return 0;
}