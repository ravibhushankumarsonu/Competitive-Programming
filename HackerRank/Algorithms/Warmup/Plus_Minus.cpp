#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float a[n],b[3]={0,0,0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
            b[0]+=1;
        else if(a[i]<0)
            b[1]+=1;
        else
            b[2]+=1;
    }
    printf("%.3f\n",(b[0]/n));
    printf("%.3f\n",(b[1]/n));
    printf("%.3f\n",(b[2]/n));
    return 0;
}