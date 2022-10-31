/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n,k;
	cin>>n>>k;
	int ans=0;
	int z=0;
	if(n==0||k==0){
		cout<<0<<endl;
		return 0;
	}
	while(n>0){
		int m=n%10;
		if(m==0){
			z++;
		}else{
			ans++;
		}
		if(z==k){
			break;
		}
		n/=10;
	}
	if(n==0){
		cout<<(ans+z-1)<<endl;
	}else{
		cout<<ans<<endl;
	}
	return 0;
}