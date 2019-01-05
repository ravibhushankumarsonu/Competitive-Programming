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
#include<map>
#include<set>

#define MOD 1000000007

using namespace std;

vector<pair<int,int> > getResult1(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	vector<pair<int, int> > result;
	int total = 0;
	map<int,int> sumMap;
	vector<pair<int, int> > pair_value1(n);
	vector<pair<int, int> > pair_value2(m);
	for(int i=0; i<n; i++) {
		pair_value1[i]= make_pair(arr1[i],i);
	}
	for(int i=0; i<m; i++) {
		pair_value2[i]= make_pair(arr2[i],i);
	}

	sort(pair_value1.begin(),pair_value1.end());
	sort(pair_value2.begin(),pair_value2.end());

	int i=0,j=0;
	int target = n+m-1;
	int prev_sum = pair_value1[0].first+pair_value2[0].first;
	result.push_back(make_pair(pair_value1[0].second,pair_value2[0].second));
	sumMap[prev_sum] = true;
	total++;
	int cont =0;
	while((i<n-1 || j<m-1 ) && (total<target)){
		int sum_b_increment = pair_value1[i].first+pair_value2[j<m-1 ? j+1 : m-1].first;
		int sum_a_increment = pair_value1[i<n-1 ? i+1 : n-1].first + pair_value2[j].second;

		if(i==n-1 && j==m-1){
			break;
		}
		if(sum_a_increment<sum_b_increment) {
			if(i==n-1){
					j++;
				}else {
					i++;
				}
		} else {
			if(j==m-1){
					i++;
				}else{
					j++;
				}
		}
		int sum_temp = pair_value1[i].first+pair_value2[j].first;
			if(sumMap.find(sum_temp) == sumMap.end()) {
				result.push_back(make_pair(pair_value1[i].second, pair_value2[j].second));
				total++;
				sumMap[sum_temp] = true;
			}
	}
	return result;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
	scanf("%d %d",&n,&m);
	vector<int>arr1(n);
	vector<int>arr2(m);
	for(int i=0; i<n; i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d",&arr2[i]);
	}
	vector<pair<int,int> > result;
	result = getResult1(arr1, n, arr2, m);
	for(int i=0; i<result.size(); i++) {
		cout<<result[i].first<<" "<<result[i].second<<endl;
	}
	return 0;
}