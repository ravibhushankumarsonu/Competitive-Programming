/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/265/A
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
    string str1,str2;
	cin>>str1>>str2;
	int i=0;
	int j=0;
	while(j<str2.length()){
		if(str1[i]==str2[j]){
			i++;
		}
		j++;
	}
	cout<<i+1<<endl;
	return 0;
}