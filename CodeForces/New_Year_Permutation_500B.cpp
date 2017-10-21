/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include<iostream>
#include<vector>
#include<string>
#include<stack>


using namespace std;

void swap(int* a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
 
void sol(vector<string>&graph,vector<int>&arr,int n){
    vector<bool>visited(n,false);
    stack<int>st;
    for(int i=0;i<n;i++){
        fill(visited.begin(),visited.end(),false);
        if(!visited[i]){
            st.push(i);
            while(!st.empty()){
                int u=st.top();
                st.pop();
                visited[u]=true;
                for(int j=0;j<n;j++){
                    if(graph[u][j]=='1'&&visited[j]==false){
                        if(arr[min(u,j)]>arr[max(u,j)]){
                            swap(&arr[u],&arr[j]);
                        }
                        st.push(j);
                    }
                }
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    vector<int>arr(n);
    vector<string>graph(n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)cin>>graph[i];
    sol(graph,arr,n);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    printf("\n");
    return 0;
}