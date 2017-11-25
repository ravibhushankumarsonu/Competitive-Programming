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
typedef long long int lli;

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d",&t);
	while(t--){
		int n,q;
		scanf("%d %d",&n,&q);
		int* arr=new int[n];
		lli val=1;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			if(val>MOD){
				continue;
			}
			val=val*arr[i];
		}
		while(q--){
			int temp;
			scanf("%d",&temp);
			
			cout<<(temp/val)<<" ";
		}
		cout<<endl;
	}
	return 0;
}