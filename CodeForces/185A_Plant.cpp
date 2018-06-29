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

using namespace std;
typedef long long int lli;

lli pow(lli a){
	if(a==0)return 1;
	if(a==1)return 2;
	lli temp=pow(a/2);
	if(a%2==0){
		return (temp*temp)%MOD;
	}else{
		return (2*((temp*temp)%MOD))%MOD;
	}
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli a;
	cin>>a;
	if(a==0){
		cout<<1<<endl;
		return 0;
	}
	lli ans=(pow(a-1)*(pow(a)+1))%MOD;
	cout<<ans<<endl;
	return 0;
}