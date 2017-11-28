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


bool sol(vector<int>&arr,int n){
	sort(arr.begin(),arr.end());
	for(int i=n-1;i>1;i--){
		int l=0;
		int r=i-1;
		while(l<r){
			if((arr[l]+arr[r])==arr[i])
			{
				return true;
			}else if((arr[l]+arr[r])<arr[i]){
				l++;
			}else{
				r--;
			}
		}
	}
	return false;
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
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			arr[i]*=arr[i];
		}
		cout<<((sol(arr,n)==true)?"YES":"NO")<<endl;
	}
	return 0;
}