/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//http://www.spoj.com/problems/RAIN3/
/*
s[i] = (78901 + 31*s[i-1]) mod  699037
t[i] = (23456 + 64*t[i-1]) mod 2097151
a[i]=(s[i] mod 100 + 1) * (t[i] mod 100 + 1)
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007
#define N 1500001
using namespace std;
typedef long long int lli;
lli s[N];
lli t[N];
lli a[N];
lli sum[N];


int sol(int l,int r,lli val){
	if(l>r)return -1;
	if(val>=sum[r])return r;

	int mid=(l+r)/2;

	if(sum[mid]==val)return mid;

	if(mid>0&&sum[mid-1]<=val&&val<sum[mid])
		return mid-1;

	if(val<sum[mid])
		return sol(l,mid-1,val);
	return sol(mid+1,r,val);
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int k;
	scanf("%d",&k);
	while(k--){
		int n;
		lli m;
		scanf("%lld %lld %d %lld",&s[0],&t[0],&n,&m);
		a[0]=(s[0]%100 + 1) * (t[0]%100 + 1);
		sum[0]=0;
		sum[1]=a[0];
		for(int i=1;i<n;i++){
			s[i]=(78901 + 31*s[i-1])%699037;
			t[i] = (23456 + 64*t[i-1])%2097151;
			a[i]=(s[i] % 100 + 1) * (t[i]% 100 + 1);
			sum[i+1]=sum[i]+a[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			int temp=sol(i,n-1,sum[i]+m);
			ans=max(ans,(temp-i+1));
		}
		cout<<ans<<endl;
	}
	return 0;
}