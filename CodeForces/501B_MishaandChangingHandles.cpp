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
#include<map>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int q;
	cin>>q;
	string str1,str2,value;
	map<string,string>mp;
	map<string,string>::iterator it;
	for(int i=0;i<q;i++){
		cin>>str1>>str2;
		it=mp.find(str1);
		//cout<<((it==mp.end())?"YES":"NO")<<" ";
		//cout<<str1<<" "<<str2<<" ";
		if(it!=mp.end()){
			//cout<<"Within"<<endl;
			value=it->second;
			mp.erase(it);
			mp[str2]=value;
		}else{
			mp[str2]=str1;
		}
	}
	//cout<<1<<endl;
	cout<<mp.size()<<endl;
    for(it=mp.begin();it!=mp.end();++it){
		cout<<it->second<<" "<<it->first<<endl;
	}
	return 0;
}