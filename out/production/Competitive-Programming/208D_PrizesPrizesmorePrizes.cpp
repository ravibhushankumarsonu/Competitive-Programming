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
typedef long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli n;
	scanf("%lld",&n);
	vector<lli>arr(n);
	for(int i=0;i<n;i++)scanf("%lld",&arr[i]);

	lli curr=0;
	vector<lli>ans(5,0);

	vector<lli>archive(5),prize(5);
	for(int i=0;i<5;i++){
		scanf("%lld",&prize[i]);
		archive[i]=prize[i];
	}
	sort(prize.begin(),prize.end());

	for(int i=0;i<n;i++){
		curr+=arr[i];
		if(curr>=prize[0]){
			for(int j=4;j>=0;j--){
				ans[j]+=(curr/prize[j]);
				curr=curr%prize[j];
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	cout<<curr<<endl;
	return 0;
}