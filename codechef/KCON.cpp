/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/JAN18/problems/KCON
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;
typedef long long int lli;

lli Pre_sum(vector<lli>&arr,lli n){
	lli g=arr[0];
	lli l=arr[0];
	for(lli i=1;i<n;i++){
		l=l+arr[i];
		g=max(g,l);
	}
	return g;
}

lli Suf_sum(vector<lli>&arr,lli n){
	lli g=arr[n-1];
	lli l=arr[n-1];
	for(lli i=n-2;i>=0;i--){
		l=l+arr[i];
		g=max(g,l);
	}
	return g;
}

lli Sub_sum(vector<lli>&arr,lli n){
	lli g=arr[0];
	lli l=arr[0];
	for(lli i=1;i<n;i++){
		l=max(arr[i],l+arr[i]);
		g=max(g,l);
	}
	return g;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		lli n,k;
		scanf("%lld %lld",&n,&k);
		vector<lli>arr(n);
		lli sum=0;
		for(lli i=0;i<n;i++){
			scanf("%lld",&arr[i]);
			sum+=arr[i];
		}
		if(n*k<=100000){
			lli f_ans=arr[0];
			lli l=arr[0];
			for(lli i=1;i<n*k;i++){
				l=max(arr[(i+n)%n],l+arr[(i+n)%n]);
				f_ans=max(l,f_ans);
			}
			cout<<f_ans<<endl;
		}else{
			lli pre_sum=Pre_sum(arr,n);
			lli suf_sum=Suf_sum(arr,n);
			lli sub_sum=Sub_sum(arr,n);
			//cout<<pre_sum<<" "<<sum<<" "<<suf_sum<<" "<<sub_sum<<endl;
			lli ans=max(sum*k,sub_sum);
			ans=max(ans,pre_sum+suf_sum);
			if(k>=2&&sum>0){
				ans=max(ans,sum*(k-1)+pre_sum);
				ans=max(ans,sum*(k-1)+suf_sum);
				ans=max(ans,pre_sum+suf_sum+sum*(k-2));
			}
			cout<<ans<<endl;
		}
		
	}
	return 0;
}