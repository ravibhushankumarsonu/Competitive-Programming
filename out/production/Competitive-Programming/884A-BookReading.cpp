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
	int n,t,i;
	scanf("%d %d",&n,&t);
	for(i=0;i<n;i++){
		if(t<=0){
			cout<<i<<endl;
			return 0;
		}
		int temp;
		scanf("%d",&temp);
		t-=(86400-temp);
	}
	if(t<=0){
		cout<<n<<endl;
	}
	return 0;
}