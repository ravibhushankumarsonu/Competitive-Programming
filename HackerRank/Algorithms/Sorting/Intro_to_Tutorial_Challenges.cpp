#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,v;
    
    cin>>v;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]==v)
            {
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}