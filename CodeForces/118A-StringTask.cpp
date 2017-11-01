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

bool IsVowel(char x){
	x=tolower(x);
	if(x=='a'||x=='o'||x=='y'||x=='e'||x=='u'||x=='i')return true;
	return false;
}


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	string str;
	cin>>str;
	int n=str.length();
	int j=0;
	for(int i=0;i<n;i++){
		if(IsVowel(str[i]))continue;
		str[j]=str[i];
		j++;
	}
	string ans="";
	
	for(int i=0;i<j;i++){
		ans+=".";
		ans+=((char)tolower(str[i]));
	}
	cout<<ans<<endl;
	return 0;
}