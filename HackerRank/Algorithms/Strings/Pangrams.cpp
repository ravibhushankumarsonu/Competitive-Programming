#include <cmath>
#include <stdio.h>
#include<stdlib.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() 
{
       char s[10000];
    gets(s);
    int a[150]={0};
    for(int i=0;s[i]!='\0';i++)
        {
        char t=tolower(s[i]);
        int n=t;
        if(n>0)
            a[n]=1;
    }
    int sum=1;
    for(int i=97;i<123;i++)
        {
        if(a[i]==0)
            sum=0;
    }
    if(sum==1)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}