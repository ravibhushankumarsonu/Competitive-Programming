#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    cin>>n>>k;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cont=0;
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            {
            if((arr[i]+arr[j])%k==0)
                cont++;
        }
    }
    cout<<cont<<endl;
    return 0;
}