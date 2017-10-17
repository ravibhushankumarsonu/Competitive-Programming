#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//https://en.wikipedia.org/wiki/Parity_of_a_permutation
bool isTrue(int arr[],int n)
    {
       int sum = 0;
        for (int i=0;i<n;i++)
            for (int j=i+1;j<n;j++)
                if (arr[i] > arr[j])
                    sum ++;
    return !(sum%2);
}
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
            {
            cin>>arr[i];
        }
        if(isTrue(arr,n))
            {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}