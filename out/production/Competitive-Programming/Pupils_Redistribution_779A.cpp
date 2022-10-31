/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n;
	cin>>n;
	vector<int>arr(6,0);
	vector<int>arr1(6,0);
	vector<int>arr2(6,0);
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr1[temp]++;
	}
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		arr2[temp]++;
	}
	int cont1=0;
	int cont2=0;
	for(int i=1;i<6;i++){
		if((arr1[i]+arr2[i])&1){
			cout<<-1<<endl;
			return 0;
		}
		int mid=(arr1[i]+arr2[i])/2;
		cont1+=abs(mid-arr1[i]);
		cont2+=abs(mid-arr2[i]);
	}
	if(cont1==cont2){
		cout<<(cont1/2)<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}