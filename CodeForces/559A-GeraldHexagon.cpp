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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int a1,a2,a3,a4,a5,a6;
	cin>>a1>>a2>>a3>>a4>>a5>>a6;
	int k=a1+a2+a3;
	int ans=k*k-a1*a1-a3*a3-a5*a5;
	cout<<ans<<endl;
	return 0;
}