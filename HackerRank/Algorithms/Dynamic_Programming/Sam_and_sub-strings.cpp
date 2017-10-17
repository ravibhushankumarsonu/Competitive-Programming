#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<string.h>
#define MOD 1000000007
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string num;
    cin>>num;
    int save[200001];
    save[1] = 1;
	for (int i = 2; i <= 200000; i++)
		save[i] = ((long long)save[i - 1] * 10 + 1) % MOD;
    
    int n = (int)num.size();
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int digit = num[i - 1] - '0';
		ans = ((long long)digit * i * save[n - i + 1] + ans) % MOD;
	}
	cout << ans << endl;
	return 0;
}