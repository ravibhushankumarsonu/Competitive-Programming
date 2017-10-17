#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    map<int,int>arr;
    int m=10001;
    for(int i=0;i<n;i++)
        {
        int x;
        cin>>x;
        if(arr.find(x)!=arr.end())
            {
           m=min((i-arr[x]),m);
        }
        else
            arr[x]=i;
        //cout<<m<<" ";
    }
     if(m==10001)
         cout<<-1<<endl;
    else
        cout<<m<<endl;
    return 0;
}