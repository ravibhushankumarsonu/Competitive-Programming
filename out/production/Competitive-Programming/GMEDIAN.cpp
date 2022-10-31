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
	while(t--) {
		int t;
		while(t--) {
			int n;
			vector<int> arr(n);
			for(int i=0; i<n; i++) {
				scanf("%d ", &arr[i]);
			}
			sort(arr.begin(),arr.end());
			int result = n;

			for(int len=2; len<=n; len++) {
				if(len&1) {
					result += (result+)
				}
			}
		}
	}
	return 0;
}