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
lli getMaxValue(lli n, lli p) {
	if(n<=2) {
		return 0;
	} else {
		return ((n-1)/2);
	}
}

lli get_number_ways(lli n, lli p, lli m) {
	if(m==0) {
		return (p*p*p);
	}
	lli way1 = (p-m)*(p-m);
	lli way2 = (p-n)*(p-m);
	lli way3 = (p-n)*(p-n);
	return (way1+way2+way3);
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli t;
	cin>>t;
	while(t--) {
		lli n, p;
		cin>>n>>p;
		lli max_value = getMaxValue(n,p);
		//cout<< max_value <<endl;
		cout << get_number_ways(n, p, max_value) <<endl;
	}
	return 0;
}