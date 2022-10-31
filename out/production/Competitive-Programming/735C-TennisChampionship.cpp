/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/735/C
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;
typedef unsigned long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli x;
	cin>>x;
	int ans=2;
	lli a=2;
	lli b=3;
	if(x<=3){
		if(x<2){
			cout<<0<<endl;
		}else if(x==2){
			cout<<1<<endl;
		}else{
			cout<<2<<endl;
		}
		return 0;
	}
	while(1){
		if(a+b<=x){
			ans++;
			a=b;
			b=a+b;
		}else{
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}