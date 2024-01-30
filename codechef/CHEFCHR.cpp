/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/FEB18/problems/CHEFCHR
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
		string str;
		cin>>str;
		int n=str.length();
		int cnt=0;
		for(int i=0;i<n-3;i++){
			vector<int>arr(26,0);
			arr['c'-'a']=1;
			arr['h'-'a']=1;
			arr['e'-'a']=1;
			arr['f'-'a']=1;
			for(int j=i;j<i+4;j++){
				arr[str[j]-'a']--;
			}
			
			if(arr['c'-'a']==0&&arr['h'-'a']==0&&arr['e'-'a']==0&&arr['f'-'a']==0)cnt++;
			//cout<<arr['c'-'a']<<" ";
		}
		if(cnt>0){
			printf("lovely %d\n",cnt);
		}else{
			printf("normal\n");
		}
	}
	return 0;
}