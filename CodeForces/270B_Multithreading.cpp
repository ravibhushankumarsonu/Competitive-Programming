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
    int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int i=n-1;
	while(i>0&&arr[i-1]<arr[i]){
		i--;
	}
	cout<<i<<endl;
	return 0;
}