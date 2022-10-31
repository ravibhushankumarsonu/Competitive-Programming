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
typedef long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n;
	scanf("%d",&n);
	vector<int>arr(n+1);
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr.begin()+1,arr.end());
	reverse(arr.begin()+1,arr.end());
	int k=(static_cast<int>(log2(n)))/2;
	vector<lli>sum(n+1);
	sum[1]=arr[1];
	for(int i=2;i<=n;i++){
		sum[i]=sum[i-1]+arr[i];
	}
	lli ans=0;
	while(k>=0){
		ans+=sum[(static_cast<int>(pow(4,k)))];
		//cout<<ans<<" ";
		k--;
	}
	cout<<ans<<endl;
	return 0;
}