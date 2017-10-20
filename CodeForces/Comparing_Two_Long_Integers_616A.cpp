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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	string num1,num2;
	getline(cin,num1);
	getline(cin,num2);
	int i=0;
	while(num1[i]=='0'){
		i++;
	}
	num1=num1.substr(i,num1.length()-i);
	//cout<<num1<<" "<<num1.length()<<endl;
	i=0;
	while(num2[i]=='0'){
		i++;
	}
	num2=num2.substr(i,num2.length()-i);
	//cout<<num2<<endl;
	if(num1.length()>num2.length()){
		cout<<">"<<endl;
		return 0;
	}else if(num1.length()<num2.length()){
		cout<<"<"<<endl;
		return 0;
	}else{
		int i=0;
		while(i<num1.length()){
			if(num1[i]>num2[i]){
				cout<<">"<<endl;
				return 0;
			}else if(num1[i]<num2[i]){
				cout<<"<"<<endl;
				return 0;
			}else{
				i++;
			}
		}
		if(i==num1.length()){
			cout<<"="<<endl;
			return 0;
		}
	}
	return 0;
}