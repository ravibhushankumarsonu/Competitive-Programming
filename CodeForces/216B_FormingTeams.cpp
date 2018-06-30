/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
look at this link for explanations http://pavelsimo.blogspot.com/2012/08/codeforces-round-133-upsolving.html

*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;

int parent[102];
int siz[102];

int find_set(int x){
	if(x==parent[x]){
		return x;
	}
	return parent[x]=find_set(parent[x]);
}

bool union_set(int x,int y){
	x=find_set(x);
	y=find_set(y);
	if(x==y)return false;
	parent[x]=y;
	siz[y]+=siz[x];
	return true;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		parent[i]=i;
		siz[i]=1;
	}
	int u,v;
	int ans=0;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		--u;
		--v;
		if(!union_set(u,v)){
			if(siz[find_set(u)]&1){
				ans++;
			}
		}
	}
	if((n-ans)&1)++ans;
	cout<<ans<<endl;
	return 0;
}