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
    int* arr=new int[n];
    int sum=0;
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0)
        {
        cout<<"NO"<<endl;
    }
    else
        {
        int cont=0;
        for(int i=0;i<n;i++)
            {
            if(arr[i]%2!=0)
                {
                arr[i]=arr[i]+1;
                arr[i+1]=arr[i+1]+1;
                cont+=2;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}