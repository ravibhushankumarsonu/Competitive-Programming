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


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	string str;
	cin>>str;
	vector<int>arr;
	int len=1;
	int ans=0;
	int j=0;
	//cout<<ans<<" ";
	for(int i=1;i<str.length();i++){
		if(str[i]!=str[i-1]){
			arr.push_back(len);
			if(str[i-1]=='a')ans=max(ans,len);
			str[++j]=str[i];
			len=1;
		}else{
			len++;
		}
	}
	arr.push_back(len);
	str=str.substr(0,j+1);
	int n=str.length();
	//if(str[n-1]=='a')ans=max(arr[n-1],ans);
	//vector<int>Max(n,0);
	int i=0;
	
	while(str[i]=='b'&&i<n)i++;
	j=n-1;
	while(str[j]=='b'&&j>=0)j--;

	//cout<<i<<" "<<j<<endl;
	
	if(i>j){
		cout<<ans<<endl;
		return 0;
	}
	
	int a=0;
	int b=0;
	for(int k=i;k<=j;k++){
		if(str[k]=='b'){
			//Max=max(arr[k],Max);
			b+=arr[k];
		}else{
			a+=arr[k];
		}
	}
	
	int temp=max(a,arr[i]+arr[j]+b);
	ans=max(ans,temp);
	cout<<ans<<endl;
	
	return 0;
}