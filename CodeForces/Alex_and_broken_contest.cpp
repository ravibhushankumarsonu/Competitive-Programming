/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<string>
#include<string.h>
#include<algorithm>
#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	string arr[]={"Danil", "Olya", "Slava", "Ann","Nikita"};
	string str;
	cin>>str;
	int cont=0;
	for(int i=0;i<5;i++){
		size_t pos=str.find(arr[i],0);
		while(pos!=string::npos){
			cont++;
			pos=str.find(arr[i],pos+1);
		}
	}
	if(cont==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}