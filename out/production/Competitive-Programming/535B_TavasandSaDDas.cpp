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
#include<math.h>
#include<string>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
	cin>>n;
	int ans=0;
	int temp,cnt=0;
	while(n){
		temp=n%10;
		if(temp==4){
			ans+=(1*pow(2,cnt));
		}else{
			ans+=(2*pow(2,cnt));
		}
		cnt++;
		n/=10;
	}
	cout<<ans<<endl;
	return 0;
}