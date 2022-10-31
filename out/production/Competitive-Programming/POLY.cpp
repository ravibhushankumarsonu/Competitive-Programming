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
#include<limits.h>
#include<string>
 
#define MOD 1000000007
 
using namespace std;
typedef long long int lli;
 
int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<vector<lli> >arr(n,vector<lli>(4));
		for(int i=0;i<n;i++){
			scanf("%lld %lld %lld %lld",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3]);
		}
		int q;
		scanf("%d",&q);
		while(q--){
			lli ans=LLONG_MAX;
			lli x;
			scanf("%lld",&x);
			for(int i=0;i<n;i++){
				ans=min(ans,(arr[i][0]+(x*arr[i][1])+(x*x*arr[i][2])+(x*x*x*arr[i][3])));
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
} 