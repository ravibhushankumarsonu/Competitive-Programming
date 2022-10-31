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
#include<map>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,temp,prev;
	cin>>n;
	vector< long long int>arr;
	cin>>prev;
	int cnt=1;
	for(int i=1;i<n;i++){
		cin>>temp;
		if(prev!=temp){
			arr.push_back(cnt);
			cnt=1;
			prev=temp;
		}else{
			cnt++;
		}
	}
	arr.push_back(cnt);
	long long int ans=0;
	for(int i=0;i<arr.size();i++){
		//cout<<arr[i]<< " ";
		ans+=((arr[i]+1)*arr[i])/2;
	}
	cout<<ans<<endl;
	return 0;
}