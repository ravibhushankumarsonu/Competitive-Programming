/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#define MOD 1000000007

using namespace std;

int sol(int m,int n){
	if(n==m)return 0;
	if(n>m){
		return (n-m);
	}
	if(m&1){
		return 2+sol((m+1)/2,n);
	}else{
		return 1+sol(m/2,n);
	}
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
    cin>>n>>m;
	int ans=sol(m,n);
	cout<<ans<<endl;
	return 0;
}