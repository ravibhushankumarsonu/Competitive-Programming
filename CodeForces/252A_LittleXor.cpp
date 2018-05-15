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
	int* arr=new int[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int ans=0;
	int temp;
	for(int i=0;i<n;i++){
		temp=arr[i];
		ans=max(temp,ans);
		for(int j=i+1;j<n;j++){
			temp=temp^arr[j];
			ans=max(temp,ans);
		}
	}
	cout<<ans<<endl;
	return 0;
}