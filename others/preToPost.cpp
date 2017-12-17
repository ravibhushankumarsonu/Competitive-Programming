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

vector<int>st;

bool sol(vector<int>&arr,int l,int r){
	if(l>r){
		return true;
	}
	if(l==r){
		st.push_back(arr[l]);
		return true;
	}
	st.push_back(arr[l]);
	int i=l+1;
	while(arr[i]<arr[l]&&i<=r){
		i++;
	}
	while(i<=r){
		if(arr[i]<arr[l]){
			return false;
		}
		i++;
	}
	if(i>r){
		return sol(arr,l+1,r);
	}else{
		return (sol(arr,i,r)&&sol(arr,l+1,i-1));
	}
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		vector<int>arr(n);
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		if(sol(arr,0,n-1)==true){
			for(int i=st.size()-1;i>=0;i--){
				cout<<st[i]<<" ";
			}
			cout<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		st.erase(st.begin(),st.end());
	}
	return 0;
}