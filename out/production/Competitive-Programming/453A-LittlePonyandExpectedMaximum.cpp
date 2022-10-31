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

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	float n,m,ans=0.0;
	cin>>m>>n;
	for(float i=1.0;i<=m;i++){
		ans+=(i*(pow((i/m),n)-pow((i-1)/m,n)));
	}
	cout<<ans<<endl;
	return 0;
}