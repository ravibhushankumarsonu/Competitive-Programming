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
    string str;
	cin>>str;
	//cout<<str<<endl;
	int n=str.length();
	string ans="";
	if(str[0]=='@'||str[n-1]=='@')ans="No solution";
	int pre=-2;
	for(int i=1;i<n;i++){
		if(str[i]=='@'){
			if((i-pre)<=2){
				ans="No solution";
				break;
			}else{
				pre=i;
			}
		}
	}
	if(ans=="No solution"){
		cout<<"No solution"<<endl;
		return 0;
	}
	int l=0;
	for(int i=1;i<n;){
		if(str[i]=='@'){
			if(i!=pre){
				ans+=str.substr(l,(i-l+2))+',';
				i++;
				l=i+1;
			}else{
				ans+=str.substr(l,(n-l));
				break;
			}
		}
		i++;
	}
	if(l==0&&pre==-2)ans="No solution";
	cout<<ans<<endl;
	return 0;
}