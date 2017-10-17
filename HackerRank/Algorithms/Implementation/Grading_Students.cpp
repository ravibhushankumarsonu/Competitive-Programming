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
    while(n--)
        {
        int ma;
        cin>>ma;
        if(ma<38)
            cout<<ma<<endl;
        else if((5*((ma/5)+1)-ma)<3)
            cout<<5*((ma/5)+1)<<endl;
        else
            cout<<ma<<endl;
    }
    return 0;
}