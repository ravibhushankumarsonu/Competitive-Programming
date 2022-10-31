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
typedef long long int lli;
lli temp=0;

lli sol(lli x,lli y,lli m){
	if(x>=m||y>=m)return 0;
	/*if(x<0&&y>0){
		return (abs(x)+m-1)/y;
	}else if(y<0&&x>0){
		return (abs(y)+m-1)/x;
	}*/
	if(x<=y){
		return 1+sol(x+y,y,m);
	}else{
		return 1+sol(x,x+y,m);
	}
}


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    lli x,y,m,ans;
	cin>>x>>y>>m;
	if(x<=0&&y<=0&&(m>x&&m>y)){
		cout<<-1<<endl;
		return 0;
	}else{
		ans=sol(x,y,m);
	}
	cout<<ans<<endl;
	return 0;
}