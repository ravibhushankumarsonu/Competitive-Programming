/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
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
	cin>>t;
	while(t--) {
		int n,a,b;
		cin>>n>>b>>a;
		int lcm = 0;
		int bob = 0;
		int alice =0;
		for(int i=0; i<n ;i++){
			int temp;
			cin>>temp;
			if(temp%b==0 && temp%a==0) {
				lcm++;
			}else if(temp%b==0){
				bob++;
			}else if(temp%a==0){
				alice++;
			}
		}
		//cout<<lcm<<" "<<bob<<" "<<alice<<endl;
		if(lcm > 0){
			bob++;
		}

		if(bob<=alice){
			cout<<"ALICE"<<endl;
		} else {
			cout<<"BOB"<<endl;
		}
	}
	return 0;
}