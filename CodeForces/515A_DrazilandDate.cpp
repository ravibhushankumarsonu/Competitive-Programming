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
    int s,a,b;
	cin>>a>>b>>s;
	if(s>=(abs(a)+abs(b))){
		if((s-abs(a)-abs(b))%2==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}