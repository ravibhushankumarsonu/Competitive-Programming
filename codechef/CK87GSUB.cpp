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
#include<string.h>

#define MOD 1000000007

using namespace std;
typedef long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		lli ans=0;
		//cout<<str<<endl;
		int n=str.length();
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		
		for(int i=0;i<n-1;i++){
			if(str[i]==str[i+1]){
				ans++;
			}
		}
		//cout<<str<<" ";
		int j=0;
		lli len=1;
		vector<int>freq;
		for(int i=1;i<n;i++){
			if(str[i]!=str[i-1]){
				str[++j]=str[i];
				//cout<<len<<" :";
				freq.push_back(len);
				
				if(len>=3){
					ans+=(((len-2)*(len-1))/2);
				}
				len=1;
			}else{
				len++;
			}
		}
		//cout<<len<<endl;
		
		if(len>=3){
			ans+=(((len-2)*(len-1))/2);
		}
		
		freq.push_back(len);
		str=str.substr(0,j+1);
		//cout<<str.length()<<" "<<freq.size()<<endl;
		if(str.length()>=3){
			for(int i=1;i<str.length()-1;i++){
				if(str[i-1]==str[i+1]){
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}