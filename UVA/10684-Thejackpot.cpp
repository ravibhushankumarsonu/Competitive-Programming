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
#define N 10000
using namespace std;
int arr[N];

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(int i=0;i<n;i++)scanf("%d",&arr[i]);
		int loc=arr[0];
		int gl=arr[0];
		for(int i=1;i<n;i++){
			loc=max(loc+arr[i],arr[i]);
			gl=max(gl,loc);
		}
		if(gl<=0){
			printf("Losing streak.\n");
		}else{
			printf("The maximum winning streak is %d.\n",gl);
		}
	}
	return 0;
}