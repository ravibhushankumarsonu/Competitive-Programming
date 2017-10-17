#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int rev(long int a)
    {
    long int temp=0;
    while(a>0)
        {
        temp=10*temp+a%10;
        a/=10;
    }
    return temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int x,j,k;
    cin>>x>>j>>k;
    int cont=0;
    for(long int i=x;i<=j;i++)
        {
        long int temp=abs(i-rev(i))%k;
        //cout<<temp<<" "<<i<<" "<<rev(i)<<endl;
        if(temp==0)
            cont++;
    }
    cout<<cont<<endl;
    return 0;
}
