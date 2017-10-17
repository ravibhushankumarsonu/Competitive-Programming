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
        long int n;
        long int result = 0;
        cin>>n;
        long int *arr = new long int[n+1];
        
        for(int i = 1 ; i <= n ; i++)
        {
            cin>>arr[i];
            
            if(((i * (n-1-i)) % 2) != 0)
                result ^=arr[i];    
        }
        cout<<result<<"\n";
        delete[] arr;
    }   
    return 0;
}