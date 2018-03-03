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
#include<map>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
	cin>>n>>m;
	map<string,string>mp;
	string str1,str2;
	for(int i=0;i<m;i++){
		cin>>str1>>str2;
		if(str1.length()>str2.length()){
			mp[str1]=str2;
		}else{
			mp[str1]=str1;
		}
	}
	for(int i=0;i<n;i++){
		cin>>str1;
		cout<<mp[str1]<<" ";
	}
	cout<<endl;
	return 0;
}