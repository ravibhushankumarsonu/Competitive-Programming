#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int m=0;
    int c=0;
    for(int i=0;i<n;i++)
        {
        int temp;
        cin>>temp;
        if(temp>m)
            {
            m=temp;
            c=1;
        }
        else if(temp==m)
            {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
