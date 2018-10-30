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
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0; i<n; i++) {
			scanf("%d", &arr[i]);
		}
		int ans=(arr[0]+arr[0]);
		for(int i=1; i<n; i++) {
			ans=ans xor (arr[i]+arr[i]);
		}
		cout << ans << endl;
	}
    
	return 0;
}