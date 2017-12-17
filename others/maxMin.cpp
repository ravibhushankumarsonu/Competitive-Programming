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
#include<stack>

#define MOD 1000000007

using namespace std;

int sol(vector<int>&arr,int n){
	if(n==0){
		return 0;
	}
	int val1=arr[0];
	if(n==1){
		return val1;
	}
	int val2=max(val1,arr[1]);
	if(n==2){
		return val2;
	}
	int val;
	for(int i=2;i<n;i++){
		 val=max(arr[i]+val1,val2);
		val1=val2;
		val2=val;
		//cout<<val<<" ";
	}
	return val;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<int>arr(n);
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		int ans=sol(arr,n);
		cout<<ans<<endl;
	}
	return 0;
}