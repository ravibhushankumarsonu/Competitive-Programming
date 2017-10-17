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
    vector<int>arr;
    long int sum=0;
    for(int i=0;i<n;i++)
        {
        int data,status;
        cin>>data>>status;
        if(status==0)
            sum+=data;
        else
            arr.push_back(data);
    }
    sort(arr.begin(),arr.end());
       int len=arr.size();
    for(int i=len-1;i>=0;i--)
        {
        if(k>0)
            {
            sum+=arr[i];
            k--;
        }
        else
            {
            sum-=arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}