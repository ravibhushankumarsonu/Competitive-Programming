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
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector<int>ans;
   int  Min=arr[1]-arr[0];
    ans.push_back(arr[0]);
    ans.push_back(arr[1]);
    for(int i=2;i<n;i++)
        {
        int temp=arr[i]-arr[i-1];
        if(temp<Min)
            {
            ans.clear();
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
            Min=temp;
        }
        else if(temp==Min)
            {
            ans.push_back(arr[i-1]);
            ans.push_back(arr[i]);
        }
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}