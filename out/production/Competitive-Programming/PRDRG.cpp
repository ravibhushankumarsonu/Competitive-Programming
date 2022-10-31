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
#include<math.h>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d ", &t);
	while(t--) {
		int n;
		scanf("%d ",&n);
		int x=1,y=2;
		for(int i=2; i<=n; i++) {
		    if(i%2==1) {
		        y=2*y;
		        x=2*x+1;
		    } else {
		        y=2*y;
		        x=2*x-1;
		    }
		}
		cout<<x<<" "<<y<<" ";
	}
	return 0;
}