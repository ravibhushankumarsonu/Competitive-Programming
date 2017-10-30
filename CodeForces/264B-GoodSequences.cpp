/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const int MAXN = 1e5+5; 

int N;
int ar[MAXN];
int dn[MAXN];
bool prime[MAXN];

int main(){
	
	for(int i=0;i<=MAXN;i++) prime[i]=true;
	
	prime[0]=false;
	prime[1]=false;
	
	for(int i=2;i<=MAXN;i++) if(prime[i])
		for(int j=i+i;j<=MAXN;j+=i)
			prime[j] = false;
	
	cin >> N ; 
	
	if(N==1) return cout << 1 << endl , 0; 
	
	for(int i=1;i<=N;i++) scanf(" %d",ar+i);
	
	for(int i=1;i<=N;i++){
	
		vector<int> v;
		
		if(prime[ar[i]]) v.push_back(ar[i]);
		
		for(int j=2;j*j<=ar[i];j++)
			if(ar[i]%j==0){
			
				if(prime[j]) v.push_back(j);
				if(prime[ar[i]/j] && j*j!=ar[i]) v.push_back(ar[i]/j);
				
			}
		
		int ans = 0;	
		for(int j=0;j<v.size();j++) ans = max(ans,dn[v[j]]);
		for(int j=0;j<v.size();j++) dn[v[j]] = ans+1;
	
	}	
		
	cout << *max_element(dn,dn+MAXN) << endl;		
		
	return 0;

}