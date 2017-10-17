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
    int A[N][N],sum1=0,sum2=0;
    for(int i=0;i<N;i++)
        {
        for(int j=0;j<N;j++)
            {
            cin>>A[i][j];
            if(i==j)
                sum1+=A[i][j];
            if(i==(N-j-1))
                sum2+=A[i][j];
        }
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}