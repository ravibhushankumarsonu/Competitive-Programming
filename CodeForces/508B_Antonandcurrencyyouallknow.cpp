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
    string num;
	cin>>num;
	int n=num.length();
	bool con=false;
	for(int i=0;i<n-1;i++){
		if(num[i]<num[n-1]&&((num[i]-'0')%2==0)){
			char c=num[i];
			num[i]=num[n-1];
			num[n-1]=c;
			con=true;
			break;
		}
	}

	if(con==false){
		for(int i=n-2;i>=0;i--){
			if((num[i]-'0')%2==0){
				char c=num[i];
				num[i]=num[n-1];
				num[n-1]=c;
				con=true;
				break;
			}
		}
	}
	if(con==false){
		num="-1";
	}
	cout<<num<<endl;
	return 0;
}