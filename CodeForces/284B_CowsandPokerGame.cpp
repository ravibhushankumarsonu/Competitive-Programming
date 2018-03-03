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
    int n;
	cin>>n;
	string str;
	cin>>str;
	int a=0;
	int i=0;
	for(int x=0;x<n;x++){
		if(str[x]=='A')a++;
		else if(str[x]=='I')i++;
		//cout<<i<<" "<<a<<endl;
	}
	//cout<<i<<" "<<a<<endl;
	if(i>1){
		cout<<0<<endl;
	}else if(i==1){
		cout<<1<<endl;
	}else{
		cout<<a<<endl;
	}
	return 0;
}