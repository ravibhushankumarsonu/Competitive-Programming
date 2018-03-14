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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,p,u,v,d;
	scanf("%d %d",&n,&p);
	vector< vector<pair<int,int> > >graph(n+1);
	
	for(int i=0;i<p;i++){
		scanf("%d %d %d",&u,&v,&d);
		graph[u].push_back(make_pair(v,d));
	}
	
	stack<int>st;
	vector<bool>visited(n+1,false);

	for(int i=1;i<=n;i++){
		if()
	}

	return 0;
}