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
//typedef pair<int,int>pi;
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
#define pi(x,y) pair<x,y>
int sol(int x,int n,int p){
    int val=static_cast<int>(x-pow(p,n));
    if(val<0)return 0;
    else if(val==0)return 1;
    else return sol(x,n,p+1)+sol(val,n,p+1);
}
int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int x,n;
    scanf("%d %d",&x,&n);
    int ans=sol(x,n,1);
    cout<<ans<<endl;
	return 0;
}