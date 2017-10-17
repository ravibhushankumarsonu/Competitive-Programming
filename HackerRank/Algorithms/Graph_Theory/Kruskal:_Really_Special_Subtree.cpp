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

struct DisSet{
   int *parent,*rnk;
   int n;
    DisSet(int n){
        this->n=n;
        parent=new int[n+1];
        rnk=new int[n+1];
        for(int i=0;i<=n;i++){
            rnk[i]=0;
            parent[i]=i;
        }
    }
    
    int find(int u){
        if(u!=parent[u]){
            parent[u]=find(parent[u]);
        }
        return parent[u];
    }

    void merge(int u,int v){
        u=find(u);
        v=find(v);
        if(rnk[u]>rnk[v]){
            parent[v]=u;
        }else{
            parent[u]=v;
        }
        if(rnk[u]==rnk[v]){
            rnk[v]++;
        }
    }
};

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
    scanf("%d %d",&n,&m);
    vector<pair<int,pair<int,int> > > edges;
    rep(i,m){
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        edges.pb(mp(w,mp(u,v)));
    }
    sort(edges.begin(),edges.end());
    DisSet ds(m);
    long int ans=0;
    foreach(itr,edges){
        int u=itr->second.first;
        int v=itr->second.second;
        int set_u=ds.find(u);
        int set_v=ds.find(v);
        if(set_u!=set_v){
            ans+=itr->first;
            ds.merge(set_u,set_v);
        }
    }
    cout<<ans<<endl;
	return 0;
}