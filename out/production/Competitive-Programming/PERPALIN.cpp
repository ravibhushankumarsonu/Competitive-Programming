/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//https://www.codechef.com/NOV17/problems/PERPALIN
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
		int n,q;
		scanf("%d %d",&n,&q);
		if(n<=2||q==1){
			cout<<"impossible"<<endl;
			continue;
		}
		string ans="";
		for(int i=0;i<n;i++)ans+="a";
		int l,r,i;
		if(n%2==1){
			i=n/2;
			l=i;
			r=i;
			//cout<<l<<" "<<r<<endl;
			while(l>=0){
				ans[l]='b';
				l-=q;
			}
			while(r<n){
				ans[r]='b';
				r+=q;
			}
		}else{
			if(q==2){
				cout<<"impossible"<<endl;
				continue;
			}
			i=n/2;
			l=i;
			r=i;
			//cout<<l<<" "<<r<<endl;
			while(l>=0){
				ans[l]='b';
				l-=q;
			}
			while(r<n){
				ans[r]='b';
				r+=q;
			}
			i=(n/2)-1;
			l=i;
			r=i;
			//cout<<l<<" "<<r<<endl;
			while(l>=0){
				ans[l]='b';
				l-=q;
			}
			while(r<n){
				ans[r]='b';
				r+=q;
			}
		}
		//cout<<l<<" "<<r<<endl;
		while(l>=0){
			ans[l]='b';
			l-=q;
		}
		while(r<n){
			ans[r]='b';
			r+=q;
		}
		cout<<ans<<endl;
	}
	return 0;
}