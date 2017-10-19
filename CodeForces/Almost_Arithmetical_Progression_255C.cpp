/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;
int arr[4010];
vector<int> v[1000001];

int main(){
	int n;
	scanf("%d",&n);
	set<int>s;
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		v[arr[i]].push_back(i);
		s.insert(arr[i]);
	}
	if(n==1){
		printf("1\n");
		return 0;
	}
	int ans=0;
	for(auto i:s){
		for(auto j:s){
			int fn=i,sn=j,l=0,r=0;
			if(fn==sn){
				ans=max(ans,(int)v[fn].size());
				continue;
			}
			while(r<v[sn].size()&&v[sn][r]<v[fn][l])r++;
			int len=2;
			while(l<v[fn].size()&&r<v[sn].size()){
				while(l<v[fn].size()&&v[fn][l]<=v[sn][r]){
					l++;
				}
				if(l<v[fn].size()){
					len++;
				}
				else{
					break;
				}
				while(r<v[sn].size()&&v[sn][r]<=v[fn][l])r++;
				if(r<v[sn].size()){
					len++;
				}
				else{
					break;
				}
			}
			ans=max(ans,len);
		}
	}
	cout<<ans<<endl;
	return 0;
}