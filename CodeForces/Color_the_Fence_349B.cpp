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
#include<string>

#define MOD 1000000007
#define N 1000001
using namespace std;
/*
int min(int a,int b){
	return (a>b)?b:a;
}*/

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int v;
	scanf("%d",&v);
	int arr[10];
	vector<pair<int,int> >ans;
	int Min=1000001;
	for(int i=1;i<10;i++){
		scanf("%d",&arr[i]);
		Min=min(Min,arr[i]);
	}
	while(v>=Min){
		//cout<<v<<" ";
		int Max=v/arr[1];
		int index=1;
		for(int i=2;i<10;i++){
			if((v/arr[i])>=Max){
				Max=v/arr[i];
				index=i;
			}
		}
		ans.push_back(make_pair(index,Max));
		v=v-arr[index]*Max;
	}
	if(ans.size()==0){
		cout<<-1<<endl;
	}else{
		for(int i=0;i<ans.size();i++){
			int x=ans[i].first;
			int cont=ans[i].second;
			while(cont--){
				cout<<x;
			}
		}
		cout<<endl;
	}
	return 0;
}