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
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int m;
	scanf("%d",&m);
	int temp,q=10000000;
	for(int i=0;i<m;i++){
		scanf("%d",&temp);
		q=min(q,temp);
	}
	int n;
	scanf("%d",&n);
	vector<int>arr(n);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	sort(arr.begin(),arr.end());
	int cnt=0;
	long int ans=0;
	for(int i=n-1;i>=0;i--){
		ans+=arr[i];
		cnt++;
		if(cnt==q){
			i-=2;
			cnt=0;
		}
	}
	cout<<ans<<endl;
	return 0;
}