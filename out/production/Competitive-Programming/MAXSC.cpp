/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/JAN18/problems/MAXSC
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<limits.h>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<vector<int> >mat(n,vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&mat[i][j]);
			}
		}

		long int ans=0;
		bool flag=false;
		int pre=INT_MAX;
		for(int i=n-1;i>=0;i--){
			if(flag==true)continue;
			int temp=-1;
			for(int j=0;j<n;j++){
				if(temp<mat[i][j]&&mat[i][j]<pre){
					temp=mat[i][j];
				}
			}
			if(temp==-1){
				flag=true;
			}
			ans+=temp;
			pre=temp;
		}
		if(flag==false){
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	return 0;
}