/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include<bits/stdc++.h>
#define N 5001
using namespace std;
int arr[N];

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(arr,0,sizeof(arr));
	int n,temp;
    //scanf("%d",&n);
    cin>>n;
    //vector<int>arr(n);
    for(int i=0;i<n;i++){
       // scanf("%d",&temp);
       cin>>temp;
        arr[temp]++;
    }
    int ans=INT_MAX;
    for(int i=1;i<N;i++){
        int cont=0;
        for(int j=0;j<i;j++){
            cont+=arr[j];
        }
        for(int j=2*i+1;j<N;j++){
            cont+=arr[j];
        }
        //cout<<arr[i]<<" ";
        ans=min(cont,ans);
    }
    printf("%d\n",ans);
    return 0;
}