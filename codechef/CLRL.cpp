/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<vector>
#include<limits.h>
#include<string>

#define MOD 1000000007

using namespace std;

int Min(int a,int b){
	return (a<b)?a:b;
}
int Max(int a,int b){
	return (a>b)?a:b;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int n,val;
		scanf("%d %d",&n,&val);
		vector<int>arr(n);
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		int min=INT_MIN;
		int max=INT_MAX;
		bool ans=true;
		for(int i=0;i<n-1;i++){
			if(arr[i]==val){
				break;
			}
			if(arr[i]>val&&arr[i]<max){
				max=arr[i];
			}else if(arr[i]<val&&arr[i]>min){
				min=arr[i];
			}
			else{
				ans=false;
				//cout<<i<<" ";
				break;
			}
		}
		
		cout<<((ans==true)?"YES":"NO")<<endl;
	}
	return 0;
}