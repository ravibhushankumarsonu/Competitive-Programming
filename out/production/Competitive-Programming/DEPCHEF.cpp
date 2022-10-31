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

#define MOD 1000000007

using namespace std;

void solve() {
	int n;
	cin >>n;
	vector<pair<int, int> > arr(n);
	for(int i=0;i <n; i++) {
		cin >> arr[i].first;
	}
	for(int i=0; i<n; i++) {
		cin >> arr[i].second;
	}
	vector<bool> surivival(n, true);
	if(arr[1].first+arr[n-1].first >= arr[0].second) {
		surivival[0] = false;
	}
	if(arr[0].first+arr[n-2].first >= arr[n-1].second) {
		surivival[n-1] = false;
	}
	for (int i=1; i<n-1; i++) {
		if(arr[i-1].first+arr[i+1].first >= arr[i].second) {
			surivival[i] =false;
		}
	}
	int ans = -1;
	for(int i=0; i<n; i++) {
		if(surivival[i] == true) {
			ans = max(ans, arr[i].second);
		}
	}
	cout<<ans<<endl;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	cin >> t;
	while(t--){
		solve();
		/* code */
	}
	
	return 0;
}