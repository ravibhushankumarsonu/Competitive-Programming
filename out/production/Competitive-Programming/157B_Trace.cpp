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
		cin>>arr[i];
	}
	float sum=0;
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		int x=(i%2==0)?1:-1;
		sum+=x*arr[i]*arr[i];
	}
	float ans=sum*3.14159265358979323846;
	cout<<ans<<endl;
	return 0;
}