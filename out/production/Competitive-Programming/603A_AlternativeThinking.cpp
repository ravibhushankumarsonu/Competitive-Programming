/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/603/A
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<string.h>

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
	int len1=0,len2=0;
	bool st1=false,st2=true;
	for(int i=0;i<n;i++){
		bool temp=(str[i]=='0')?false:true;
		if(st1!=temp){
			len1++;
			st1=temp;
		}
		if(st2!=temp){
			len2++;
			st2=temp;
		}
	}
	int ans=min(n,2+max(len1,len2));
	cout<<ans<<endl;
	return 0;
}