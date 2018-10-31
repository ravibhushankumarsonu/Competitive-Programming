/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
problem : https://www.codechef.com/problems/MTYFRI 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<queue>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int t;
	scanf("%d", &t);
	while(t--) {
		int n,k;
		scanf("%d %d", &n, &k);
		vector<vector<int> > arr(n,vector<int>(2));
		int total = 0;
		for(int i=0;i<n;i++) {
			scanf("%d", &arr[i][0]);
			total+=arr[i][0];
			arr[i][1] = i;
		}
		sort(arr.begin(),arr.end());

		/*for(int i=0; i<n; i++) {
			cout << arr[i][0] << " " << arr[i][1] << "/ ";
		}
		cout << endl;*/
		queue<int> lower_even;
		queue<int> lower_odd;
		for(int i=0; i<n; i++) {
			if(arr[i][1]%2 == 0) {
				lower_even.push(i);
			} else {
				lower_odd.push(i);
			}
		}

		int score = 0;
		int i = n-1;
		int ans = false;
		while(i>=0 || k >0) {
			if(arr[i][1]%2==1) {
				score+=arr[i][0];
			} else {
				if(arr[i][0] > arr[lower_even.front()][0] && k>0) {
					k--;
					lower_even.pop();
					score += arr[lower_even.front()][0];
				}
			}
			if(score > (total-score)) {
				ans=true;
				break;
			}
			if(i==0) {
				break;
			}
			i--;
		}

		if(ans==true) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}