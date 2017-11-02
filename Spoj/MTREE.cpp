/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//http://www.spoj.com/problems/MTREE/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007
#define N 100001

using namespace std;
typedef long long int lli;
vector<pair<int,int> >graph[N];
lli arr[N];
lli ans=0;

lli dfs(int u,int pre){
	lli r=0;
	for(int i=0;i<graph[u].size();i++){
		int v=graph[u][i].first;
		int we=graph[u][i].second;
		if(v!=pre){
			r=(r+we*(1+dfs(v,u)))%MOD;
		}
	}
	return arr[u]=r;
}

void sol(int u,int pre,lli w){
	lli &r=arr[u];
	r=(r+w*(1+arr[pre]+MOD-(w*(r+1))%MOD))%MOD;
	ans=(ans+r)%MOD;
	for(int i=0;i<graph[u].size();i++){
		int v=graph[u][i].first;
		int val=graph[u][i].second;
		if(v!=pre){
			sol(v,u,val);
		}
	}
}


int main() {
	// your code goes here
	//freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
	int n,u,v,w;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		scanf("%d %d %d",&u,&v,&w);
		graph[u].push_back(make_pair(v,w));
		graph[v].push_back(make_pair(u,w));
	}

	//for(int i=0;i<=n;i++)cout<<graph[i].size()<<" ";
	//cout<<endl;
	arr[0]=0;
	dfs(1,-1);
	sol(1,0,0);
	ans=(ans*500000004)%MOD;
	cout<<ans<<endl;
	return 0;
}