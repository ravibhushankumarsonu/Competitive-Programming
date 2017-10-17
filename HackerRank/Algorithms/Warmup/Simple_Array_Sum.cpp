#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    int A[N],sum=0;
    for(int i=0;i<N;i++)
        {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<sum<<endl;
    return 0;
}