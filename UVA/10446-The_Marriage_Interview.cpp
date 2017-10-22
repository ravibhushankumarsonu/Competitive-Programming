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
#define N 61
#define MOD 1000000007

using namespace std;
typedef unsigned long long int lli;
lli mat[N][N]={0};

lli sol(int n,int back){
	if(n<=1)return 1;
	if(mat[n][back]!=0)return mat[n][back];
	mat[n][back]=1;
	for(int i=1;i<=back;i++){
		mat[n][back]+=sol(n-i,back);
	}
	return mat[n][back];
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	int n,b;
	int i=0;
    while(1){
		scanf("%d %d",&n,&b);
		if(n>60)break;
		printf("Case %d: %llu\n",++i,sol(n,b));
	}
	return 0;
}