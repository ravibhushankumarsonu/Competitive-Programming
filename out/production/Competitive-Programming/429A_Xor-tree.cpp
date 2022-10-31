/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//#include<bits/stdc++.h>
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<list>
#include<queue>

#define MOD 1000000007

using namespace std;
vector<int>ans;
int actual[100001];
int target[100001];
bool visited[100001];

void dfs(vector<list<int> >&graph,int even,int odd,int level,int node){
	visited[node]=true;
	if(level&1){
		if(((actual[node]+odd)%2)!=target[node]){
			odd++;
			ans.push_back(node);
		}
	}else{
		if(((actual[node]+even)%2)!=target[node]){
			even++;
			ans.push_back(node);
		}
	}
	for(list<int>::iterator itr=graph[node].begin();itr!=graph[node].end();++itr){
		if(!visited[(*itr)]){
			dfs(graph,even,odd,level+1,(*itr));
		}
	}
	return;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
	scanf("%d",&n);
	vector<list<int> >graph(n+1);
	int u,v;
	for(int i=1;i<n;i++){
		scanf("%d %d",&u,&v);
		graph[v].push_back(u);
		graph[u].push_back(v);
	}
	/*
	for(int i=0;i<=n;i++){
		for(list<int>::iterator itr=graph[i].begin();itr!=graph[i].end();++itr){
			cout<<(*itr)<<" ";
		}
		cout<<endl;
	}*/
	//vector<int> actual(n+1),target(n+1);
	for(int i=1;i<=n;i++){
		scanf("%d",&actual[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&target[i]);
	}

	//dfs(graph,0,0,0)
	memset(visited,false,sizeof(visited));
	dfs(graph,0,0,1,1);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)cout<<ans[i]<<endl;
	return 0;
}