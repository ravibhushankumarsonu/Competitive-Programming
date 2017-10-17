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

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
    scanf("%d",&n);
    vec(pi(lli,int))arr(n);
    rep(i,n){
        lli temp;
        scanf("%lld",&temp);
        arr[i]=mp(temp,i);
    }
    sort(arr.begin(),arr.end());
    lli diff=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i-1].second>arr[i].second){
            diff=min((arr[i].first-arr[i-1].first),diff);
        }
    }
    cout<<diff<<endl;
	return 0;
}