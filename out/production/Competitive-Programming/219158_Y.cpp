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

typedef unsigned long long int ulli;
int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    ulli a,b,c,d;
	cin>>a>>b>>c>>d;
	ulli ans=(a*((b*((c*d)%100))%100))%100;
	cout<<ans<<endl;
	return 0;
}