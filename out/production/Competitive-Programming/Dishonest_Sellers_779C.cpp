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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	int n,k;
	cin>>n>>k;
	vector<pair<int,pair<int,int> > >arr(n);
	for(int i=0;i<n;i++)scanf("%d",&arr[i].second.first);
	for(int i=0;i<n;i++)scanf("%d",&arr[i].second.second);
	for(int i=0;i<n;i++)arr[i].first=arr[i].second.first-arr[i].second.second;
	int spent=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<k;i++){
		spent+=arr[i].second.first;
	}
	int i=k;
	while(arr[i].first<0){
		spent+=arr[i].second.first;
		i++;
	}
	for(;i<n;i++){
		spent+=arr[i].second.second;
	}
	cout<<spent<<endl;
	return 0;
}