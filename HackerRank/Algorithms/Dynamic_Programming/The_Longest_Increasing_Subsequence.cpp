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
int Ceil(vector<int> &arr, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (arr[m] >= key)
        r = m;
    else
        l = m;
    }

    return r;
}

int lis(vec(int) &arr,int n) {
    vector<int> tail(n, 0);
    int length = 1;
    tail[0] = arr[0];
    for (size_t i = 1; i < n; i++) {
        if (arr[i] < tail[0])
            tail[0] = arr[i];
        else if (arr[i] > tail[length-1])
            tail[length++] = arr[i];
        else
            tail[Ceil(tail, -1, length-1, arr[i])] = arr[i];
    }

    return length;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n;
    scanf("%d",&n);
    vec(int)arr(n);
    rep(i,n)scanf("%d",&arr[i]);
    cout<<lis(arr,n)<<endl;
	return 0;
}