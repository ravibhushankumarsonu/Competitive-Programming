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

#define MOD 1000000007
typedef long long int lli;

using namespace std;

lli power(lli n,int x,int p){
	if(x==0){
		return 1;
	}
	lli temp=power(n,x/2,p);
	if(x&1){
		return (n*((temp*temp)%p))%p;
	}else{
		return (temp*temp)%p;
	}
}

lli sol(int a,int n,int p){
	lli ans=a%p;
	if(ans==0||ans==1)return ans;
	for(int i=2;i<=n;i++){
		ans=power(ans,i,p);
	}
	return ans;
}


int main() {
	// your code goes here
	freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	int i=0;
	while(t--){
		int a,n,p;
		scanf("%d %d %d",&a,&n,&p);
		int ans=sol(a,n,p);
		printf("Case #%d: %d\n",++i,ans);
	}
	return 0;
}