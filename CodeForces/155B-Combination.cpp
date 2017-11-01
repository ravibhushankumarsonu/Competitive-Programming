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

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.txt","r",stdin);
	//freopen("output.out","w",stdout);
	int n;
	cin>>n;
	vector<pair<int,int> >arr(n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&arr[i].second,&arr[i].first);
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	int ans=0;
	int cont=0;
	for(int i=0;i<n;i++){
		//cout<<arr[i].first<<" "<<arr[i].second<<" "<<cont<<endl;
		if(cont<0)break;
		ans+=arr[i].second;
		cont+=arr[i].first;
		cont--;
	}
	cout<<ans<<endl;
	return 0;
}