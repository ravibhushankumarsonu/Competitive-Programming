#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    long long int sum=0,t=5;
    for(int i=0;i<n;i++)
        {
        sum+=(t/2);
        t=(t/2)*3;
    }
    cout<<sum<<endl;
    return 0;
}