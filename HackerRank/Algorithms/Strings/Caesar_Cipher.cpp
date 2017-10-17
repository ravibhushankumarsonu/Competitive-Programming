#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
int convert(int x,int k)
    {
    if(x>64&&x<91)
        {
        if((x+k)>90)
            return (x+k)%90+64;
        else
            return x+k;
    }
    else if(x>96&&x<123)
        {
        if((x+k)>122)
            return (x+k)%122+96;
        else
            return x+k;
    }
    else
        return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    scanf("%d",&k);
    k=k%26;
    for(int i=0;i<n;i++)
        {
            int x=a[i];
        printf("%c",convert(x,k));
    }
    cout<<endl;
    return 0;
}
