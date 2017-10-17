#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int s,t;
    cin>>s>>t;
    int a,o;
    cin>>a>>o;
    int m,n;
    cin>>m>>n;
    int apple=0;
    for(int i=0;i<m;i++)
        {
        int temp;
        cin>>temp;
        if((temp+a)>=s&&(temp+a)<=t)
            apple++;
    }
     int orange=0;
    for(int i=0;i<n;i++)
        {
        int temp;
        cin>>temp;
        if((temp+o)>=s&&(temp+o)<=t)
            orange++;
    }
    cout<<apple<<endl<<orange<<endl;
    return 0;
}
