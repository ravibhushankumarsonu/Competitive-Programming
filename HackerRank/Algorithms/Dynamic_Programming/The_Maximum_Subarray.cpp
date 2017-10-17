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
        long int max1=0;
        int max_con=arr[0];
        int max_here=arr[0];
        int max2=arr[0];
        for(int i=0;i<n;i++)
            {
            if(arr[i]>0)
                max1+=arr[i];
            if(arr[i]>max2)
                max2=arr[i];
        }
        if(max2<0)
            max1=max2;
        for(int i=1;i<n;i++)
            {
            max_here=max(arr[i],max_here+arr[i]);
            max_con=max(max_con,max_here);
        }
        cout<<max_con<<" "<<max1<<endl;
    }
    return 0;
}