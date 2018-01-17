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
		int m,n;
		scanf("%d %d",&m,&n);
		string str1,str2;
		cin>>str1>>str2;
		int index=1;
		for(int i=1;i<m;i++){
			if(str1[i]!=str1[index-1]){
				str1[index++]=str1[i];
			}
		}
		int len1=index;
		index=1;
		for(int i=1;i<m;i++){
			if(str2[i]!=str2[index-1]){
				str2[index++]=str2[i];
			}
		}
		int len2=index;
		int dp[len1+1][len2+1];
		for(int i=0;i<=len1;i++){
			for(int j=0;j<=len2;j++){
				if(i==0||j==0)dp[i][j]=0;
				else if(str1[i-1]==str2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		int ans=len1+len2-dp[len1][len2];
		cout<<ans<<endl;
 	}
	return 0;
}