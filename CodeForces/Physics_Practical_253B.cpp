/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include<bits/stdc++.h>

using namespace std;

int sol(vector<int>&arr,int l,int r,int val){
    while(l<r){
		int mid=(l+r+1)/2;
		//cout<<mid<<" "<<l<<" "<<r<<endl;
		if(arr[mid]>2*val){
			r=mid-1;
		}else{
			l=mid;
		}
	}
	return l;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
    scanf("%d",&n);
    vector<int>arr(n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    sort(arr.begin(),arr.end());
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(2*arr[i]>=arr[n-1]){
            ans=min(i,ans);
            break;
        }else{
            int t=sol(arr,i,n-1,arr[i]);
            t=i+(n-t);
            ans=min(t,ans);
        }
    }
    printf("%d\n",ans);
    return 0;
}