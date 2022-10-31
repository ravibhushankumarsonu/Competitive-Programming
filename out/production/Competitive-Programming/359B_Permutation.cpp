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
    int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=k;i++){
		cout<<(2*i)<<" "<<(2*i-1)<<" ";
	}
	for(int i=2*k+1;i<=2*n;i++){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}