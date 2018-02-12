/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/262/A
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;

int fun(int x){
	int i,ans=0;
	while(x){
		i=x%10;
		if(i==4||i==7)ans++;
		x/=10;
	}
	return ans;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,k;
	scanf("%d %d",&n,&k);
	int val,ans=0;
	for(int i=0;i<n;i++){
		scanf("%d",&val);
		if(fun(val)<=k){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}