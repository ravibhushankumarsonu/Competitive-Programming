/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int Gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return Gcd(b,a);
}
int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	cin >> t;
	while(t--) {
		int n,t,x,y,z;
		cin>>n>>t>>x>>y>>z;
		int a = y-x;
		int b = z-y;
		int total1 = 2*n+1;
		int curr;
		if(t==2||t==4) {
			curr = total1 - 2*y;
		} else if (t==1) {
			if(a!=b) {
				curr = z;
			} else {
				curr = total1 - z;
			}
		}else {
			if(a!=b) {
				curr = x;
			} else {
				curr = total1 - x;
			}
		}
		int gcd = Gcd(total1, curr);
		curr = curr/gcd;
		total1 = total1/gcd;
		cout << curr<<" "<<total1<<endl;
	}
	return 0;
}