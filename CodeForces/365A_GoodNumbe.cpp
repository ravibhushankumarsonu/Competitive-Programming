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
	cin>>n>>k;
	int ans=0;
	while(n--){
		vector<bool>arr(k+1,false);
		int temp;
		cin>>temp;
		while(temp){
			arr[temp%10]=true;
			temp/=10;
		}
		int i=0;
		while(i<=k){
			if(arr[i]==false)break;
			else{
				i++;
			}
		}
		if(i==k+1)ans++;
	}
	cout<<ans<<endl;
	return 0;
}