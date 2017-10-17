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
#define graph(x,n) vector<list<x> >graph(n);
#define type(x) __typeof(x.begin())
#define foreach(i,x) for(type(x) i=x.begin();i!=x.end();++i)
#define pb(x) push_back(x)

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
    scanf("%d %d ",&n,&m);
    graph(pi,n+1);
    rep(i,m){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        graph[u].pb(mp(v,w));
        graph[v].pb(mp(u,w));
    }
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    vec(bool) visited(n+1,false);
    vec(int) dist(n+1,INF);
    pq.push(mp(0,1));
    dist[1]=0;
    while(!pq.empty()){
        int v=pq.top().second;
        visited[v]=true;
        pq.pop();
        foreach(itr,graph[v]){
            if(!visited[(*itr).first]){
                int val;
                if((*itr).second>=dist[v]){
                    val=(*itr).second;
                }else{
                    val=dist[v];
                }
                if((dist[(*itr).first])>val){
                    dist[(*itr).first]=val;
                    pq.push(mp(dist[(*itr).first],(*itr).first));
                }
            }
        }
    }
    if(dist[n]==INF){
        cout<<"NO PATH EXISTS"<<endl;
    }else{
        cout<<dist[n]<<endl;
    }
	return 0;
}