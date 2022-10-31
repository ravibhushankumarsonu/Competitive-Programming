/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/448/A
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
    vector<int>a(3),b(3);
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	scanf("%d %d %d",&b[0],&b[1],&b[2]);
	int sa=a[0]+a[1]+a[2];
	int sb=b[0]+b[1]+b[2];
	//cout<<sa<<" "<<sb<<endl;
	int ap=sa/5;
	int bp=sb/10;
	if(sa%5)ap++;
	if(sb%10)bp++;
	int val;
	scanf("%d",&val);
	//cout<<sa<<sb<<endl;
	if((ap+bp)>val){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	return 0;
}