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
    int t;
	scanf("%d",&t);
	while(t--){
		int m,x,y;
		scanf("%d %d %d",&m,&x,&y);
		//cout<<x<<y<<m<<endl;
		int* arr=new int[m];
		int* temp=new int[m];
		for(int i=0;i<m;i++){
			arr[i]=i+1;
		}
		

		int len=m-1;
		while(len>1){
			m/=2;
			int l=(m*1ll*x)/y;
			arr[2*l]=0;
			arr[2*l+1]=0;
			int k=0;
			for(int i=0;i<=len;i+=2){
				if(arr[i]!=0){
					temp[k++]=arr[i];
				}
			}
			for(int i=1;i<=len;i+=2){
				if(arr[i]!=0){
					temp[k++]=arr[i];
				}
			}
			for(int i=0;i<=len;i++)arr[i]=temp[i];
			m=len-1;
			len-=2;
			//cout<<m<<" "<<len<<endl;
			//for(int i=0;i<6;i++)cout<<arr[i]<<" ";
			//cout<<endl;
		}
		
		cout<<(arr[0]^arr[1])<<endl;
	}
	return 0;
}