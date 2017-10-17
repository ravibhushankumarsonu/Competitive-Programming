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
        {
        cin>>arr[i];
    }
    int en=100;
    int i=0;
    while(1)
        {
        int x=(i+k)%n;
        if(arr[x]==0)
            en--;
        else
            en-=3;
        if(x==0)
            {
            break;
        }
        i=x;
    }
    cout<<en<<endl;
    return 0;
}
