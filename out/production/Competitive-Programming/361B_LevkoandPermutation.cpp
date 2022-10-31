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
	if(n==k){
		cout<<-1<<endl;
	}else{
		cout<<n-k<<" ";
		for(int i=1;i<=n;i++){
			if(i!=(n-k)){
				cout<<i<<" ";
			}
		}
	}
    cout<<endl;
	return 0;
}