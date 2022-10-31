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
    int n,v;
	cin>>n>>v;
	int c=0;
	vector<int>arr;
	while(n--){
		c++;
		int t,temp;
		cin>>t;
		bool ans=false;
		for(int i=0;i<t;i++){
			cin>>temp;
			if(temp<v)ans=true;
		}
		if(ans==true)arr.push_back(c);
	}
	cout<<arr.size()<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}