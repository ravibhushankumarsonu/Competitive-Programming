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
typedef long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		lli n,i;
		lli k=static_cast<lli>(pow(2,32));
		//cout<<k<<" ";
		cin>>n;
		lli na=(k%(n+1))-1;
		lli b=(k/(n+1));
		//cout<<na<<" "<<nb<<endl;
		lli a=b+1;
		int nb=n-na;
		//cout<<(na+nb)<<endl;
		for(i=0;i<na;i++)
			cout<<a<<" ";
		for(i=0;i<nb;i++)
			cout<<b<<" ";
		cout<<endl;
	}
	return 0;
}