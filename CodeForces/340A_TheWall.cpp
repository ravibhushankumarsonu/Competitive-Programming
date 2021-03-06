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
int gcd(int a, int b){
	if(a==0)return b;
	return gcd(b%a,a);
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int x,y,a,b;
	cin>>x>>y>>a>>b;
	int ans=(x*y)/gcd(x,y);
	//cout<<ans<<endl;
	int l=(a-1)/ans;
	int r=b/ans;
	cout<<(r-l)<<endl;
	return 0;
}