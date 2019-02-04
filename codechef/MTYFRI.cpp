/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
problem: https://www.codechef.com/problems/MTYFRI 
*/
#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;
typedef long long int lli;

lli get_array_sum(vector<int> &arr) {
	lli sum = 0;
	for(int i=0; i<arr.size(); i++) {
		sum+=arr[i];
	} 
	return sum;
}

lli gain_after_k_swaps(vector<int>&motu_arr, vector<int>&tomu_arr, int k) {
	lli motu_greatest_k_sum = 0;
	int temp = k;
	for(int i=motu_arr.size()-1; i>=0 && temp>0; i--,temp--) {
		motu_greatest_k_sum += motu_arr[i];
	} 

	lli tomu_least_k_sum = 0;
	temp =k;
	for(int i=0; i< tomu_arr.size() && temp>0; i++,temp--) {
		tomu_least_k_sum+=tomu_arr[i];
	}

	lli diff = motu_greatest_k_sum - tomu_least_k_sum;
	return 2*diff;
}

bool isWinTomu(vector<int>&motu_arr, vector<int>&tomu_arr, int k) {
	lli motu_socre = get_array_sum(motu_arr);
	lli tomu_score = get_array_sum(tomu_arr);
	if(tomu_score > motu_socre) {
		return true;
	}
	sort(motu_arr.begin(), motu_arr.end());
	sort(tomu_arr.begin(), tomu_arr.end());

	//lli diff = gain_after_k_swaps(motu_arr, tomu_arr, k);
	lli motu_greatest_k_sum = 0;
	int temp = k;
	for(int i=motu_arr.size()-1; i>=0 && temp>0; i--,temp--) {
		motu_greatest_k_sum += motu_arr[i];
	} 

	lli tomu_least_k_sum = 0;
	temp =k;
	for(int i=0; i< tomu_arr.size() && temp>0; i++,temp--) {
		tomu_least_k_sum+=tomu_arr[i];
	}

	motu_socre = motu_socre - motu_greatest_k_sum + tomu_least_k_sum ;
	tomu_score = tomu_score - tomu_least_k_sum + motu_greatest_k_sum;

	if(tomu_score > motu_socre) {
		return true;
	}
	return false;
}

void solve() {
	int n,k;
	cin>>n>>k;
	vector<int> motu_arr;
	vector<int> tomu_arr;
	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		if(i&1) {
			tomu_arr.push_back(temp);
		} else {
			motu_arr.push_back(temp);
		}
	}
	if(isWinTomu(motu_arr, tomu_arr,k)) {
		cout << "YES" <<endl;
	} else {
		cout<< "NO" <<endl;
	}
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}   
	return 0;
}