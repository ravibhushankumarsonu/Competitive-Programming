#include <cmath>
#include <cstdio>
#include <vector>
#include<unordered_set>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int N;
        cin>>N;
		bool *dp = new bool[N+1]; // dp[N] = true -> P1 wins, else P2 wins
		dp[1] = false;
		dp[2] = true;
		dp[3] = true;
		dp[4] = true;
		dp[5] = true;
		for(int i = 6; i <= N; i++) {
			if(dp[i-2] == false || dp[i-3] == false || dp[i-5] == false) {
				dp[i] = true;
			} else {
				dp[i] = false;
			}
		}
		if(dp[N]) {
			cout<<"First\n";
		} else {
			cout<<"Second\n";
		}
    }
    return 0;
}