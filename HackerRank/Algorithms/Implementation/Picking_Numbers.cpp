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
    vector<int>arr(100,0);
    for(int i=0;i<n;i++)
        {
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    int g=0;
    for(int i=1;i<n;i++)
        {
        g=max(g,arr[i]+arr[i-1]);
    }
    cout<<g<<endl;
    return 0;
}