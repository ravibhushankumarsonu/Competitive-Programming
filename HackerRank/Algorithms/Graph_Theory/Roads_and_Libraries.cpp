#include <bits/stdc++.h>
#define MOD 1000000007
#define INF 1<<29
#define times int t;scanf("%d",&t);while(t--)

using namespace std;
typedef long int li;
typedef long long int lli;
typedef unsigned long long int ullli;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int>pi;
typedef map<int,int>mi;
//typedef unordered_map<int,int> umi;
typedef set<int>si;
//typedef unordered_set<int>usi;
#define vec(x) vector<x>
#define mat(x) vector< vector<x> >
#define rep(i,n) for(int i=0;i<(n);i++)
#define Fori(a,b) for(int i=(a);i<=(b);i++)
#define Forj(a,b) for(int j=(a);j<=(b);j++)
#define mp(a,b) make_pair((a),(b))
#define DEBUG(x) cout<<"#x : "<<x<<endl;
//#define graph(x,n) vector<list<x> >graph(n);
#define type(x) __typeof(x.begin())
#define foreach(i,x) for(type(x) i=x.begin();i!=x.end();++i)



int DFS(vector<list<int> >&graph,int u,vector<bool> &visited){
    list<int>::iterator itr;
    /*queue<int>qe;
    qe.push(u);
    int cont=0;
    while(!qe.empty()){
        int front=qe.front();
        qe.pop();
        visited[front]=true;
        cont++;
        if(!visited[*itr]){
        for(itr=graph[front].begin();itr!=graph[front].end();++itr){
          qe.push(*itr);
          cout<<*itr<<" ";
        }
    }
    }*/
    int cont=1;
    visited[u]=true;
    for(itr=graph[u].begin();itr!=graph[u].end();++itr){
        if(!visited[*itr]){
            cont+=DFS(graph,(*itr),visited);
        }
    }
    return cont;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    times{
        int n,m,c_lib,c_road;
        cin>>n>>m>>c_lib>>c_road;
        vector<list<int> >graph(n+1);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        vector<bool>visited(n+1,false);
        long long int ans=0;
       // stack<int>st;
        for(int i=1;i<=n;i++){
                if(!visited[i]){
                    int com=DFS(graph,i,visited);
                    if((c_lib+(com-1)*c_road)<(com*c_lib))
                    ans+=(c_lib+(com-1)*c_road);
                    else
                        ans+=com*c_lib;
                }
            }
        
        /*for(int i=1;i<=n;i++){
            cout<<value[i]<<" ";
           // ans+=value[i];
        }*/
        cout<<ans<<endl;
    }
    return 0;
}
