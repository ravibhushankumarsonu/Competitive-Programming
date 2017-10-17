#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int arr[100];
    for(int i=0;i<100;i++)
        arr[i]=0;
    long int n;
    cin>>n;
    for(long int i=0;i<n;i++)
        {
        int t;
        cin>>t;
        arr[t]++;
    }
    int i=0;
    while(i<100)
        {
        while(arr[i]>0)
            {
            cout<<i<<" ";
            arr[i]--;
        }
        i++;
    }
    cout<<endl;
    return 0;
}