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
    int n,m;
	cin>>n>>m;
	vector<vector<int> >mat(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)scanf("%d",&mat[i][j]);
	}
	int ans=false;
	for(int i=0;i<m;i++)if(mat[0][i]==1)ans=true;
	for(int i=0;i<n;i++)if(mat[i][0]==1)ans=true;
	for(int i=0;i<m;i++)if(mat[n-1][i]==1)ans=true;
	for(int i=0;i<n;i++)if(mat[i][m-1]==1)ans=true;
	if(ans==true)cout<<2<<endl;
	else
	cout<<4<<endl;
	return 0;
}