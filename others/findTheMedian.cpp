/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//Problem Url: https://practice.geeksforgeeks.org/problems/find-the-median/0
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
        int n;
        cin>>n;
        int* arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2==1){
            cout<<arr[n/2]<<endl;
        }else{
            cout<<((arr[n/2]+arr[n/2-1])/2)<<endl;
        }
    }
	return 0;
}