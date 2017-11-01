/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//http://codeforces.com/problemset/problem/359/D
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

#define MOD 1000000007
#define K 20
#define N 300000
using namespace std;
int tgcd[N][K];
int tmin[N][K];

int gcd(int a,int b){
	if(a==0)return b;
	return gcd(b%a,a);
}


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	for(int i=0;i<N;i++){
		for(int j=0;j<K;j++){
			tgcd[i][j]=-1;
			tmin[i][j]=INT_MAX;
		}
	}
	int n;
	scanf("%d",&n);
	int* arr=new int[n];
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);

	//for(int i=0;i<n;i++)printf("%d ",arr[i]);

	for(int j=0;j<K;j++){
		if(j==0){
			for(int i=0;i<n;i++){
				tgcd[i][j]=arr[i];
				tmin[i][j]=arr[i];
			}
			continue;
		}

		for(int i=0;i<n;i++){
			if(tgcd[i][j-1]==-1)continue;
			int tv=i+(1<<(j-1));
			if(tv>n)continue;
			if(tgcd[tv][j-1]==-1)continue;
			tgcd[i][j]=gcd(tgcd[i][j-1],tgcd[tv][j-1]);
			tmin[i][j]=gcd(tmin[i][j-1],tmin[tv][j-1]);
		}
	}

	
	return 0;
}