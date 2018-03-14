/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
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
typedef pair<int,int> pi;

void print(int x){
	if(x==0)cout<<'A'<<endl;
	if(x==1)cout<<'B'<<endl;
	if(x==2)cout<<'C'<<endl;
	if(x==3)cout<<'D'<<endl;
	return;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    string stra,strb,strc,strd;
	cin>>stra>>strb>>strc>>strd;
	vector<pi> arr(4);
	arr[0].first=stra.length()-2;
	arr[1].first=strb.length()-2;
	arr[2].first=strc.length()-2;
	arr[3].first=strd.length()-2;
	arr[0].second=0;
	arr[1].second=1;
	arr[2].second=2;
	arr[3].second=3;

	sort(arr.begin(),arr.end());
	if(arr[0].first*2<=arr[1].first&&arr[3].first>=arr[2].first*2){
		cout<<'C'<<endl;
	}
	else if(arr[0].first*2<=arr[1].first){
		print(arr[0].second);
	}else if(arr[3].first>=arr[2].first*2){
		print(arr[3].second);
	}
	else{
		cout<<'C'<<endl;
	}
	/*else if(arr[3].first>=arr[2].first&&arr[0].first+2<=arr[1].first){
		cout<<'C'<<endl;
	}*/
	return 0;
}