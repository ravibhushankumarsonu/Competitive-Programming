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
#include<set>
#define MOD 1000000007

using namespace std;

void solve() {
	int n;
	cin >>n;
	vector<int> arr(26,0);
	
	for(int i = 0; i< n; i++) {
		string str;
		cin>>str;
		set<int> set1;
		for(int i=0; i<str.length; i++) {
			set1.insert(str[i]);
		}
		for(auto itr = set1.begin(); itr != set1.end(); ++itr) {
			char value = *itr;
			arr[value- 'a']++;
		}
	}
	int ans =0 ;
	for(int i=0; i<26; i++) {
		if(arr[i] == n) {
			ans++;
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
	}
	
	return 0;
}