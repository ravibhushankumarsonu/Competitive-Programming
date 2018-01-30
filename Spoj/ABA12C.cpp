/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://www.spoj.com/problems/ABA12C/
*/
#include <iostream>
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
		int n,k,temp;
		scanf("%d %d",&n,&k);
		int* arr=new int[k+1];
		for(int i=1;i<=k;i++){
			scanf("%d",&arr[i]);
		}
		int* ans=new int[n+1];
		for(int i=1;i<=k;i++){
			ans[i]=arr[i];
		}

		for(int i=2;i<=k;i++){
			for(int j=1;j<i;j++){
				if(arr[i-j]==-1||ans[j]==-1)continue;
				if(ans[i]==-1){
					ans[i]=arr[i-j]+ans[j];
				}else{
					ans[i]=min(ans[i],arr[i-j]+ans[j]);
				}
			}
		}
		if(k==0){
			cout<<0<<endl;
		}else{
			cout<<ans[k]<<endl;
		}
	}
	return 0;
}