/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
//http://www.spoj.com/problems/ALLIZWEL/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007
#define N 101
using namespace std;
string arr[N];
struct node{
	int x,y;
};
struct node* newNode(int x,int y){
	struct node* temp=new node;
	temp->x=x;
	temp->y=y;
	return temp;
}
struct node* visited[10];

bool Find(int x,int y){
	for(int i=0;i<10;i++){
		if(visited[i]!=NULL){
			if(visited[i]->x==x&&visited[i]->y==y)
				return true;
		}
	}
	return false;
}

void Clear(){
	for(int i=0;i<10;i++){
		visited[i]=NULL;
	}
	return;
}

bool solveUtil(string* arr,int r,int c,int x,int y,string str,int k){
	//printf("x: %d y: %d",x,y);
	if(k==str.length()){
		return true;
	}
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(!(i==0&&j==0)&&
				(x+i>=0&&x+i<r)&&
				(y+j>=0&&y+j<c)&&
				(!Find(x+i,y+j))&&
				(arr[x+i][y+j]==str[k])){
					visited[k]=newNode(x+i,y+j);
					if(solveUtil(arr,r,c,x+i,y+j,str,k+1)==true){
						return true;
					}
					visited[k]=NULL;
				}
		}
	}
	return false;
}

bool solve(string* arr,int r,int c){
	string str="ALLIZZWELL";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]==str[0]){
				Clear();
				visited[0]=newNode(i,j);
				if(solveUtil(arr,r,c,i,j,str,1)==true)
				return true;
			}
		}
	}
	return false;
}

int main() {
	// your code goes here
	//freopen("input.txt","r",stdin);
    //freopen("output.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--){
		int r,c;
		scanf("%d %d",&r,&c);
		for(int i=0;i<r;i++){
			cin>>arr[i];
		}
		
		/*
		for(int i=0;i<r;i++){
			cout<<arr[i]<<endl;
		}*/
		
		bool ans=solve(arr,r,c);
		cout<<((ans==true)?"YES":"NO")<<endl;

	}
	return 0;
}