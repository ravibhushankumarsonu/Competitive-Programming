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
bool arr[1001];

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,k;
	scanf("%d %d",&n,&k);
	//bool* arr=new bool[n+1];
	memset(arr,false,sizeof(arr));
	int cont=0;
	while(k--){
		string str;
		cin>>str;
		if(str=="CLICK"){
			int m;
			cin>>m;
			if(arr[m]==false){
				arr[m]=true;
				cont++;
			}else{
				arr[m]=false;
				cont--;
			}
		}else{
			memset(arr,false,sizeof(arr));
			cont=0;
		}
		cout<<cont<<endl;
	}
	return 0;
}