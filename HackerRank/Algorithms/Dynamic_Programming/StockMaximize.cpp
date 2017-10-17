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
        int n;
        cin>>n;
        int* arr=new int[n];
        long long int profit=0;
        long int max=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=n-1;i>=0;i--)
            {
            if(arr[i]<max)
                profit=profit+(max-arr[i]);
            else
                max=arr[i];
        }
        cout<<profit<<endl;
    }
    return 0;
}