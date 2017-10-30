/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//http://codeforces.com/problemset/problem/165/C
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
	int k;
	string str;
	cin>>k>>str;
	
	int n=str.length();
	if(k==1&&str=="0")return cout<<0<<endl,0;
	int* arr=new int[n+1];
	for(int i=0;i<n;i++)arr[i]=0;

	int len=0;
	int j=0;
	for(int i=0;i<n;i++){
		if(str[i]=='1'){
			arr[j]=len;
			len=0;\
			//cout<<arr[j]<<" ";
			j++;
			
		}else{
			len++;
		}
	}
	arr[j++]=len;
	//cout<<n<<j<<" ";
	if(k>j)return cout<<0<<endl,0;
	if(k==j)return cout<<1<<endl,0;
	long long int ans=0;
	for(int i=0;i+k<j;i++){
		if(k>0){
			ans+=((arr[i]+1)*1ll*(arr[i+k]+1));
		}else{
			ans+=(arr[i]*1ll*(arr[i]+1))/2;
		}
	}
	cout<<ans<<endl;
	return 0;
}