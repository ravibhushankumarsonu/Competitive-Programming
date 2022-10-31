/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/515/C
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
	string arr[10];
	arr[0]=arr[1]="";
	arr[2]="2";
	arr[3]="3";
	arr[4]="322";
	arr[5]="5";
	arr[6]="53";
	arr[7]="7";
	arr[8]="7222";
	arr[9]="7332";
	string str;
	cin>>str;
	sort(str.begin(),str.end());
	int i=n-1;
	string ans="";
	while(i>=0&&(str[i]!='1'||str[i]!='0')){
		ans.append(arr[str[i]-'0']);
		i--;
	}
	sort(ans.begin(),ans.end());
	//ans.reserve();
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;

	return 0;
}