/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <bits/stdc++.h>
#define MOD 1000000007
#define N 200001
using namespace std;
int arr[N];
int store[N];


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	string str,pat;
	cin>>str>>pat;
	for(int i=0;i<str.length();i++){
		scanf("%d",&arr[i]);
		arr[i]--;
	}
	int n=str.length();
	int l=0,r=n;
	string d;
	while(l<r){
		int mid=(l+r+1)/2;
		memset(store,0,sizeof(store));
		for(int i=mid;i<n;i++){
			store[arr[i]]=1;
		}

		d="";
		for(int i=0;i<n;i++){
			if(store[i]){
				d+=str[i];
			}
		}

		int k=0;
		for(int i=0;i<d.length();i++){
			if(d[i]==pat[k]){
				k++;
			}
			if(k>=pat.length())break;
		}

		if(k>=pat.length())
			l=mid;
		else
			r=mid-1;
	}
	cout<<l<<endl;
	return 0;
}