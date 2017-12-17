/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
https://www.codechef.com/problems/PRIME1
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string.h>
#include<string>
#include<math.h>

#define MOD 1000000007
#define N 32000

using namespace std;
typedef long long int lli;

bool arr[N];

vector<int>Prime;

void Seive(){
	memset(arr,true,sizeof(arr));
	for(int i=2;i<N;i++){
		if(arr[i]==true){
			Prime.push_back(i);
			int j=2*i;
			while(j<N){
				arr[j]=false;
				j+=i;
			}
		}
	}
}


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	Seive();
	//cout<<Prime[0]<<endl;
	int t;
	scanf("%d",&t);
	while(t--){
		lli a,b;
		scanf("%lld %lld",&a,&b);
		bool isPrime;
		if(a%2==0){
			if(a==2){
				printf("2\n");
			}
			for(lli x=a+1;x<=b;x+=2){
				int root=sqrt(1.0*x)+1;
				isPrime=false;
				for(int j=0;Prime[j]<root;j++){
					if(x%Prime[j]==0){
						isPrime=true;
						break;
					}
				}
				if(isPrime==false){
					printf("%lld\n",x);
				}
			}
		}else{
			for(lli x=a;x<=b;x+=2){
				int root=sqrt(1.0*x)+1;
				isPrime=false;
				for(int j=0;Prime[j]<root;j++){
					if(x%Prime[j]==0){
						isPrime=true;
						break;
					}
				}
				if(isPrime==false&&x!=1){
					printf("%lld\n",x);
				}if(x==1){
					printf("2\n");
				}
			}
		}
	}
	return 0;
}