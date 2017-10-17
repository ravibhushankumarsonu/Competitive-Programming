#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Hcf(int a,int b)
    {
    if(a==0)
        return b;
    else
        return Hcf(b%a,a);
}
int Lcm(int a,int b)
    {
    return ((a*b)/Hcf(a,b));
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m;
    cin>>n>>m;
    int lcm,hcf;
    //cout<<Hcf(n,m)<<endl;
    cin>>lcm;
    for(int i=1;i<n;i++)
        {
        int temp;
        cin>>temp;
        lcm=Lcm(lcm,temp);
    }
    cin>>hcf;
    for(int i=1;i<m;i++)
        {
        int temp;
        cin>>temp;
        hcf=Hcf(hcf,temp);
    }
    int cont=0;
    //int x=lcm;
    int i=1;
    while((lcm*i)<=hcf)
        {
        if((hcf%(lcm*i))==0)
            cont++;
        i++;
    }
    cout<<cont<<endl;
    return 0;
}
