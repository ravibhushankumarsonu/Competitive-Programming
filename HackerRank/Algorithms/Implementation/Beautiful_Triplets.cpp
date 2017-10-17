#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,d;
    cin>>n>>d;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    int cont=0;
    for(int i=0;i<n-2;i++)
        {
        for(int j=i+1;j<n-1;j++)
            {
            if(arr[i]+d==arr[j])
                {
                for(int k=j+1;k<n;k++)
                    {
                    if(arr[j]+d==arr[k])cont++;
                }
            }
        }
    }
    cout<<cont<<endl;
    return 0;
}