#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int m,n;
        scanf("%d %d",&m,&n);
        int a[n];
        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
        }
        
        for(int i=0;i<n-1;i++)
            for(int j=i;j<n;j++)
                if( i<j && a[i]+a[j]==m )
                    cout<<i+1<<" "<<j+1<<"\n"; 
    }
    return 0;
}