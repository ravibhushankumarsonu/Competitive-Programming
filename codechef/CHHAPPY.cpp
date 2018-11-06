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
#include<list>

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
		scanf("%d ", &n);
		vector<int> arr(n+1);
		vector< list<int> > mat(n+1,list<int>());
		for(int i=1; i<=n; i++) {
			scanf("%d ",&arr[i]);
		}
		bool ans = false;
		for(int i=1; i<=n ;i++) {
			if(mat[arr[arr[i]]].size() > 0) {
				for(auto itr=mat[arr[arr[i]]].begin(); itr!=mat[arr[arr[i]]].end(); itr++) {
					if(arr[i] != arr[*itr]) {
						ans=true;
						break;
					}
				}
				if(ans == false) {
					mat[arr[arr[i]]].push_back(i);
				}else {
					break;
				}
			}else{
				mat[arr[arr[i]]].push_back(i);
			}
		}

		cout<< ((ans==true)?"Truly Happy":"Poor Chef") <<endl;
	}
	return 0;
}