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
typedef long long int lli;

lli gcd(lli a, lli b) {
	if(a == 0) {
		return b;
	} else {
		return gcd(b%a, a);
	}
}

void solve() {
	lli number, a,b,threshold;
	cin >> number >>a >>b >>threshold;
	lli solved = (number/a)+(number/b)- (2*(number/((a*b)/gcd(a,b))));
	//cout <<solved << endl;
	if(solved >= threshold) {
		cout << "Win" <<endl;
	} else {
		cout << "Lose" <<endl;
	}
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	
	return 0;
}