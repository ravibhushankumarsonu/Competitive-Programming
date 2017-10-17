#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,p;
    cin>>n>>p;
    cout<<min((p/2),(n-p)/2)<<endl;
    return 0;
}
