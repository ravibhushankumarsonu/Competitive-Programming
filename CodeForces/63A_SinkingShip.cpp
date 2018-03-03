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
    vector<vector<string> >mat(4,vector<string>());
	int n;
	cin>>n;
	string name,label;
	for(int i=0;i<n;i++){
		cin>>name>>label;
		if(label=="rat")mat[0].push_back(name);
		else if(label=="child"||label=="woman")mat[1].push_back(name);
		else if(label=="man")mat[2].push_back(name);
		else mat[3].push_back(name);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<mat[i].size();j++){
			cout<<mat[i][j]<<endl;
		}
	}
	return 0;
}