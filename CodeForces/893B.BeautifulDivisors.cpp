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
    int n;
	cin>>n;
	int k=1;
	int val=1;
	int ans=1;
	while(val<=n){
		k++;
		val=static_cast<int>((pow(2,k)-1)*pow(2,k-1));
		if(n%val==0){
			ans=max(ans,val);
		}
	}
	cout<<ans<<endl;
	return 0;
}