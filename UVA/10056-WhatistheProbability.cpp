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
#include<math.h>
#include<iomanip>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		float n,p,k;
		cin>>n>>p>>k;
		if(p==0){
			cout<<"0.0000"<<endl;
			continue;
		}
		float ans=((pow((1-p),k-1)*p))/(1-pow((1-p),n));
		cout<<setprecision(4)<<fixed<<ans<<endl;
	}
	return 0;
}