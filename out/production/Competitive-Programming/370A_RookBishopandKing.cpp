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
    int r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;
	if(c1==c2||r1==r2){
		cout<<1<<" ";
	}else{
		cout<<2<<" ";
	}
	if((r1+c1)%2!=(r2+c2)%2){
		cout<<0<<" ";
	}else if(r1+c1==r2+c2||r1-c1==r2-c2){
		cout<<1<<" ";
	}else{
		cout<<2<<" ";
	}
	cout<<max(abs(r1-r2),abs(c1-c2))<<endl;
	return 0;
}