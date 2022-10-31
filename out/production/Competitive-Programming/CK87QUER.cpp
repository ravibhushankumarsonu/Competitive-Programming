/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<math.h>
#define N 700

#define MOD 1000000007

using namespace std;
typedef long long int lli;
lli min(lli a,lli b){
	return (a>b)?b:a;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		lli ans=0;
		lli y;
		scanf("%lld",&y);
		for(lli i=1;i<=min(y,N);i++){
			ans+=static_cast<lli>(floor(sqrt(y-i)));
		}
		cout<<ans<<endl;
	}
	return 0;
}