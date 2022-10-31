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
		int n;
		cin>>n;
		if(n&1) {
			n-=((n+1)/2);
		} else {
			n= n/2;
		}
		cout<<1<<" "<<1;
		for(int i=0;i<n;i++){
			cout<<0;
		}
		cout<<endl;
	}    
	return 0;
}