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
#include<limits.h>

#define MOD 1000000007
#define N 1000000
using namespace std;
typedef long long int lli;

pair<int,int> tree[N];
pair<int,int> arr[N];

int max(int a,int b){
	return (a>b)?a:b;
}

void update(int l,int r,int value){

}

void query(int n,int l,int r){
	
}

pair<int,int> build(int l,int r,int i){
	if(l==r){
		tree[i].first=arr[l].first;
		tree[i].second=arr[i].second;
		return tree[i];
	}
	int mid=(l+r)/2;
	pair<int,int> temp1=build(l,mid,2*i+1);
	pair<int,int> temp2=build(mid+1,r,2*i+2);
	tree[i].first=max(temp1.first,temp2.first);
	tree[i].second=max(temp1.second,temp2.second);

	return tree[i];
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n,q,temp;
		scanf("%d %d",&n,&q);
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			arr[i].first=arr[i].second=temp;
		}
		build(0,n-1,0);
		while(q--){

		}
	}
	return 0;
}