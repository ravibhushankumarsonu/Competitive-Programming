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
	int p1=1;
	int p2=2;
	int ins=3;
	bool ans=true;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp==p1||temp==p2){
			if(p1==temp){
				int x=ins;
				ins=p2;
				p2=x;
			}else{
				int x=ins;
				ins=p1;
				p1=x;
			}
		}else{
			ans=false;
		}
	}
	if(ans==true){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}