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
    int n;
	cin>>n;
	int* arr=new int[n];
	int lar=-1;
	int p=-1;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(lar<arr[i]){
			lar=arr[i];
			p=i;
		}
	}
	if(lar==1){
		arr[p]=2;
	}else{
		arr[p]=1;
	}

	sort(arr,arr+n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}