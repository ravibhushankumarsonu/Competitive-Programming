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
	int t;
	scanf("%d",&t);
	while(t--){
		string str;
		cin>>str;
		//A 0 and B 1
		int n=str.length();
		//cout<<n<<endl;
		vector<int>pre(n);
		vector<int>next(n);
		pre[0]=(str[0]=='.')?-1:((str[0]=='A')?0:1);
		for(int i=1;i<n;i++){
			if(str[i]=='.'){
				pre[i]=pre[i-1];
			}else if(str[i]=='A'){
				pre[i]=0;
			}else{
				pre[i]=1;
			}
		}
		next[n-1]=(str[n-1]=='.')?-1:((str[n-1]=='A')?0:1);
		for(int i=n-2;i>=0;i--){
			if(str[i]=='.'){
				next[i]=next[i+1];
			}else if(str[i]=='A'){
				next[i]=0;
			}else{
				next[i]=1;
			}
		}
		int a=0;
		int b=0;
		if(str[0]=='A')a++;
		if(str[0]=='B')b++;
		if(n==1){
			cout<<a<<" "<<b<<endl;
			continue;
		}
		if(str[n-1]=='A')a++;
		if(str[n-1]=='B')b++;
		for(int i=1;i<n-1;i++){
			if(str[i]=='.'&&pre[i-1]==next[i+1]){
				if(pre[i]==0)a++;
				else if(pre[i]==1) b++;
			}else if(str[i]=='A')a++;
			else if(str[i]=='B')b++;
		}
		//for(int i=0;i<n;i++)cout<<next[i]<<" ";

		cout<<a<<" "<<b<<endl;
	}
	return 0;
}