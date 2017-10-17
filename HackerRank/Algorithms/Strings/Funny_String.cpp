#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[10000],r[1000];
        scanf("%s",s);
        int sum=1,l=strlen(s);
        for(int i=1;s[i]!='\0';i++)
        {
            if(abs(s[i]-s[i-1])!=abs(s[l-i]-s[l-i-1]))
                   sum=0;
        }
        if(sum==1)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }
    return 0;
}