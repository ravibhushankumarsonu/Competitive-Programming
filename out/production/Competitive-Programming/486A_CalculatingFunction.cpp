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

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli n;
	cin>>n;
	/*
	if(n==1){
		cout<<-1<<endl;
		return 0;
	}
	if(n&1){
		lli ans=(((2+n-1)/2)*(n/2))-(((1+n)/2)*(n/2+1));cout<<ans<<endl;
	}else{
		lli ans=(((2+n)/2)*(n/2))-(((1+n-1)/2)*(n/2));cout<<ans<<endl;
	}*/
	if(n&1){
		cout<<(-1*((n+1)/2))<<endl;
	}else{
		cout<<n/2<<endl;
	}
	return 0;
}