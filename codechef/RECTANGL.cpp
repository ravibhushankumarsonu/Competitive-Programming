/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/JAN18/problems/RECTANGL
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
    int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int sum=a+b+c+d;
		bool ans=true;
		if(a==b){
			if(c!=d)ans=false;
		}else{
			sum-=2*a;
			sum-=2*b;
			if(sum!=0)ans=false;
		}
		cout<<((ans==true)?"YES":"NO")<<endl;
	}
	return 0;
}