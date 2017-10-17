#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int  T;
    cin>>T;
    while(T--)
        {
        int N,K;
        cin>>N>>K;
        int A[N],sum1=0;
        for(int i=0;i<N;i++)
            {
            cin>>A[i];
            if(A[i]<=0)
                sum1+=1;
        }
        if(sum1<K)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
