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
	lli a,b;
	cin>>a>>b;
	lli temp=a^b;
	int pos=0;
	while(temp){
		pos++;
		temp>>=1;
	}
	lli ans=0;
	lli val=1;
	while(pos--){
		ans+=val;
		val<<=1;
	}
	cout<<ans<<endl;
	return 0;
}