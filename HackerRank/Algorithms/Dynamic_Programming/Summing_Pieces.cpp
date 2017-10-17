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
lli power(int a,int n){
    if(n==0)return 1;
    if(n&1){
        return (a*((power(a,n/2)*power(a,n/2))%MOD))%MOD;
    }else{
        return ((power(a,n/2)*power(a,n/2))%MOD);
    }
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
    scanf("%d",&n);
    vec(lli)arr(n);
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    vec(lli)cont(n,0);
    cont[0]=(power(2,n)-1)%MOD;
    for(int i=1;i<(n+1)/2;i++){
        cont[i]=(cont[i-1]+power(2,n-1-i)-power(2,i-1))%MOD;
    }
    int j=n-1;
    int i=0;
    while(j>=(n+1)/2){
        cont[j]=cont[i];
        i++;
        j--;
    }
    /*rep(i,n){
        cout<<cont[i]<<" ";
    }*/
    lli ans=0;
    rep(i,n){
        ans=(ans+(arr[i]*cont[i])%MOD)%MOD;
    }
    cout<<ans<<endl;
	return 0;
}