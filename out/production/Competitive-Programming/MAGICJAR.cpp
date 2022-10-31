/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<stdlib.h>


#define MOD 1000000007

using namespace std;
typedef long long int lli;

void solve() {
	int n;
	cin >>n;
	vector<lli> arr(n);
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	// lli ans = 0;
	// for(int i=0; i< n; i++) {
	// 	lli min_req = (arr[i]-1)*(n-i)+1;
	// 	ans = max(ans, min_req);
	// }
	cout <<ans[n-1] <<endl;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	cin>>t;
	while(t--){
		solve();
		/* code */
	}
	
	return 0;
}