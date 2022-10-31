/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/problems/MARBLES
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;
typedef long long int lli;

lli cmb(unsigned long a, unsigned long b) {
    b=(b<(a-b))?b:(a-b);
    if(a==b) return 1;
    lli val=1;
    for(unsigned long i=1;i<=b;i++) {
        val*=a;
        val/=i;
        a--;
    }
    return val;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		lli n,k;
		scanf("%lld %lld",&n,&k);
		cout<<cmb(n-1,k-1)<<endl;
	}
	return 0;
}