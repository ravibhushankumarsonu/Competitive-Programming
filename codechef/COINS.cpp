/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/problems/COINS
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;
typedef long long int lli;
lli arr[1000000];

lli sol(lli n){
	if(n<10){
		return n;
	}

	if(n<1000000){
		if(arr[n]){
			return arr[n];
		}
		lli x=sol(n/2)+sol(n/3)+sol(n/4);
		arr[n]=max(n,x);
	}

	lli x=sol(n/2)+sol(n/3)+sol(n/4);
	return max(n,x);
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	lli n;
	while(scanf("%lld",&n)==1){
		lli ans=sol(n);
		cout<<ans<<endl;
	}
	return 0;
}