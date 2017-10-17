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
int dx[]={0,-1,-1,-1,0,1,1,1};
int dy[]={-1,-1,0,1,1,1,0,-1};

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n,m;
    scanf("%d %d",&n,&m);
    mat(int)arr(n,vec(int)(m));
    Fori(0,n-1){
        Forj(0,m-1){
            scanf("%d",&arr[i][j]);
        }
    }
    mat(bool)visited(n,vec(bool)(m,false));
    int ans=0;
    Fori(0,n-1){
        Forj(0,m-1){
            if(arr[i][j]==0){
                visited[i][j]=true;
            }else if(!visited[i][j]){
                queue<pi(int,int)>qe;
                qe.push(mp(i,j));
                visited[i][j]=true;
                int cont=0;
                while(!qe.empty()){
                    int x=qe.front().first;
                    int y=qe.front().second;
                    qe.pop();
                   // visited[x][y]=true;
                    cont++;
                    for(int k=0;k<8;k++){
                        int tx=x+dx[k];
                        int ty=y+dy[k];
                        if(tx>=0&&tx<n&&ty>=0&&ty<m&&(!visited[tx][ty])&&(arr[tx][ty]!=0)){
                            visited[tx][ty]=true;
                            qe.push(mp(tx,ty));
                        }
                    }
                }
                ans=max(ans,cont);
            }
            
        }
    }
    cout<<ans<<endl;
	return 0;
}