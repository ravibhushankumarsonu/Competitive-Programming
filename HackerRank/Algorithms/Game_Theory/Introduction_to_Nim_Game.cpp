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
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=arr[0];
        for(int i=1;i<n;i++)
            ans=ans^arr[i];
        if(ans)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}