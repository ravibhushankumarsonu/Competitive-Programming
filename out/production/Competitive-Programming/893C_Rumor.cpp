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
#include<queue>

#define MOD 1000000007
#define N 100001
using namespace std;
typedef long long int lli;
vector<int> graph[N];
int cost[N];
int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&cost[i]);
	}
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	lli ans=0;
	int temp=0;
	queue<int>que;
	vector<int>visited(n+1,false);
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			que.push(i);
			temp=cost[i];
			while(!que.empty()){
				int top=que.front();
				que.pop();
				visited[top]=true;
				temp=min(cost[top],temp);
				for(auto itr=graph[top].begin();itr!=graph[top].end();++itr){
					if(!visited[*itr]){
						que.push(*itr);
					}
				}
			}
			ans+=temp;
		}
	}
	cout<<ans<<endl;
	return 0;
}