#include<bits/stdc++.h>
#define MAX 10000001
using namespace std;
int n,q;
int arr[MAX];
 
void update(int i,int val){
    while(i<n){
        arr[i]+=val;
        i+=(i& -i);
    }
    return;
}
 
int find(int a){
    int sum=0;
    while(a>0){
        sum+=arr[a];
        a-=(a& -a);
    }
    return sum;
}
 
int main(){
    memset(arr,0,sizeof(arr));
    scanf("%d %d",&n,&q);
    string str;
    int a,b;
    while(q--){
        cin>>str>>a>>b;
        if(str=="find"){
            printf("%d\n",(find(b)-find(a-1)));
        }else{
            update(a,b);
        }
    }
    return 0;
} 