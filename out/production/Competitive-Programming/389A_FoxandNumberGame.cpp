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

int gcd(int a,int b){
	if(a==0)return b;
	else
	return gcd(b%a,a);
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	int g=arr[0];
	for(int i=1;i<n;i++)g=gcd(arr[i],g);
	cout<<(g*n)<<endl;
	return 0;
}