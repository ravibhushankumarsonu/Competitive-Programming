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
    int n,k;
	cin>>n>>k;
	int* arr=new int[n];
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	sort(arr,arr+n);
	reverse(arr,arr+n);
	//for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	if(k>n){
		cout<<-1<<endl;
	}else{
		cout<<arr[k-1]<<" "<<0<<endl;
	}
	return 0;
}