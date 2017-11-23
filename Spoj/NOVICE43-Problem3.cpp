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

typedef long long int LLD;
typedef unsigned long long int LLU;

using namespace std;

int mat[13][12];

void init(){
	for(int i=1;i<13;i++)
		for(int j=1;j<12;j++)
			mat[i][j] = 0;
	mat[1][1] = 1;
	mat[12][1] = 1;
}

int main(){
	
	init();
	
	for(int j=2;j<12;j++){
		for(int i=1;i<j;i++){
			mat[i][j] += mat[i][j-1] * i;
			mat[i+1][j] += mat[i][j-1];
		}
		
		for(int i=1;i<12;i++)
			mat[12][j] += mat[i][j];
		
	}
	
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d\n", mat[12][n]);
	}
    return 0;
}