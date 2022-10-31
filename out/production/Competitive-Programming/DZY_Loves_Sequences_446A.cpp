/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <bits/stdc++.h>
#define MOD 1000000007
#define N 100001
using namespace std;

int arr[N];
vector<int>pre(N,1);
vector<int>nex(N,1);

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			pre[i]=pre[i-1]+1;
		}
	}
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[i+1]){
			nex[i]=nex[i+1]+1;
		}
	}
	if(n==1){
		cout<<1<<endl;
		return 0;
		}
	int ans=(1+nex[1]);

	for(int i=1;i<n-1;i++){
		if(arr[i+1]-arr[i-1]>1){
			ans=max(ans,1+pre[i-1]+nex[i+1]);
		}else{
			ans=max(ans,1+max(pre[i-1],nex[i+1]));
		}
	}
	ans=max(ans,1+pre[n-2]);
	cout<<ans<<endl;
	return 0;
}