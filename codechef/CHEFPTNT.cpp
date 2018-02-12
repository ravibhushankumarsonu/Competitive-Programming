/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/FEB18/problems/CHEFPTNT
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;

bool fun(int n,int m,int x,int k){
	return true;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n,m,x,k;
		scanf("%d %d %d %d",&n,&m,&x,&k);
		string str;
		cin>>str;
		//cout<<str<<endl;
		//cout<<(fun(n,m,x,k)?"yes":"no")<<endl;
		int ec=0,oc=0;
		for(int i=0;i<k;i++){
			if(str[i]=='E')ec++;
			if(str[i]=='O')oc++;
		}
		int cnt=0;
		for(int i=1;i<=m;i++){//Iteratate over months 
			if(i%2==0){
				cnt+=min(x,ec);
				ec-=min(x,ec);
			}else{
				cnt+=min(x,oc);
				oc-=min(x,oc);
			}
		}

		if(cnt<n){
			cout<<"no"<<endl;
		}else{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}