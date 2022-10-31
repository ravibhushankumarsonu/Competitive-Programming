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
#include<set>

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
		//vector< set<int> > mat(n+1,set<int>());
		vector<int>mat(n+1,0);
		for(int i=1; i<=n; i++) {
			scanf("%d ",&arr[i]);
		}
		bool ans = false;
		/*for(int i=1; i<=n ;i++) {
			if(mat[arr[arr[i]]].size() > 0) {
				for(auto itr=mat[arr[arr[i]]].begin(); itr!=mat[arr[arr[i]]].end(); itr++) {
					if(arr[i] != arr[*itr]) {
						ans=true;
						break;
					}
				}
				if(ans == false) {
					mat[arr[arr[i]]].insert(i);
				}else {
					break;
				}
			}else{
				mat[arr[arr[i]]].insert(i);
			}
		}*/
		for(int i=1;i<=n;i++) {
			if(mat[arr[arr[i]]] != 0) {
				if(arr[i] != arr[arr[arr[i]]]) {
					ans=true;
				}else {
					mat[arr[arr[i]]] = i;
				}
			} else {
				mat[arr[arr[i]]] = i;
			}
			if(ans == true) {
				break;
			}
		}

		cout<< ((ans==true)?"Truly Happy":"Poor Chef") <<endl;
	}
	return 0;
}