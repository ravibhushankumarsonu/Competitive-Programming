/*
Given three integers x,y and z you need to find the sum of all the numbers formed by 
having 4 atmost x times , having 5 atmost y times and having 6 atmost z times as a digit.

Note : Output the sum modulo 10^9+7.

1<=t<=50
0<=x,y,z<=100

1
1 1 1

Output:
3675

Explanation:
The ans for the input is 
4+5+6+45+54+56+65+46+64+456+465+546+564+645+654=3675


*/
/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 1000000007
#define N 101

using namespace std;
int dp[N][N][N];
long long int val[N][N][N];

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		dp[0][0][0]=1;
		for(int i=0;i<=x;i++){
			for(int j=0;j<=y;j++){
				for(int k=0;k<=z;k++){
					if(i==0&&j==0&&k==0){
						continue;
					}
					int a,b,c;
					if(i>0){
						a=dp[i-1][j][k];
					}else{
						a=0;
					}
					if(j>0){
						b=dp[i][j-1][k];
					}else{
						b=0;
					}
					if(k>0){
						c=dp[i][j][k-1];
					}else{
						c=0;
					}
					dp[i][j][k]=(a+(b+c)%MOD)%MOD;
					//cout<<dp[i][j][k]<<" ";
				}
			}
		}
		//cout<<"Case "<<(t)<<" "<<dp[x][y][z]<<endl;
		val[0][0][0]=0;
		for(int i=0;i<=x;i++){
			for(int j=0;j<=y;j++){
				for(int k=0;k<=z;k++){
					if(i==0&&j==0&&k==0){
						continue;
					}
					long long int a,b,c;
					if(i>0){
						a=(10*val[i-1][j][k]+4*1ll*dp[i-1][j][k]);
					}else{
						a=0;
					}
					if(j>0){
						b=(10*val[i][j-1][k]+5*1ll*dp[i][j-1][k]);
					}else{
						b=0;
					}
					if(k>0){
						c=(10*val[i][j][k-1]+6*1ll*dp[i][j][k-1]);
					}else{
						c=0;
					}
					val[i][j][k]=(a+(b+c)%MOD)%MOD;
					//cout<<dp[i][j][k]<<" ";
				}
			}
		}
		//cout<<val[x][y][z]<<endl;
		long long int ans=0;
		for(int i=0;i<=x;i++){
			for(int j=0;j<=y;j++){
				for(int k=0;k<=z;k++){
					ans=(ans+val[i][j][k])%MOD;
				}
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}