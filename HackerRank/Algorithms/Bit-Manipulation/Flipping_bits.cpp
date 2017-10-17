#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
   long  long int arr[t];
    for(int i=0;i<t;i++)
        {
        cin>>arr[i];
        cout<<4294967295-arr[i]<<endl;
    }
    return 0;
}