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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		lli k,n;
		scanf("%lld %lld",&k,&n);
		vector<int>arr(n+1,0);
		lli sum=((n*(n+1))/2)-k;
		arr[k]=2;
		if(sum%2==1){
			cout<<"impossible"<<endl;
			continue;
		}
		sum=sum/2;
		lli sum1=sum;
		for(int i=n;i>0&&sum!=0;i--){
			if(i<=sum&&i!=k){
				sum-=i;
				arr[i]=1;
			}
		}
		if(sum!=0){
			sum=sum1;
			for(int i=1;i<=n;i++)arr[i]=0;
			arr[k]=2;
			for(int i=n-1;i>0&&sum!=0;i--){
			if(i<=sum&&i!=k){
				sum-=i;
				arr[i]=1;
			}
		}
		}
		if(sum!=0){
			cout<<"impossible"<<endl;
			continue;
		}
		for(int i=1;i<=n;i++)printf("%d",arr[i]);
		printf("\n");
	}
	return 0;
}