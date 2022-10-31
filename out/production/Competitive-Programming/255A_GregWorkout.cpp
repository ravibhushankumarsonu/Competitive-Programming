/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/255/A
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
    int n,temp,t;
	scanf("%d",&n);
	int ch=0,bi=0,ba=0;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		t=i%3;
		if(t==0)ch+=temp;
		else if(t==1)bi+=temp;
		else ba+=temp;
	}
	int ma=max(ch,max(bi,ba));
	if(ma==ch)cout<<"chest"<<endl;
	else if(ma==bi)cout<<"biceps"<<endl;
	else{
		cout<<"back"<<endl;
	}
	return 0;
}