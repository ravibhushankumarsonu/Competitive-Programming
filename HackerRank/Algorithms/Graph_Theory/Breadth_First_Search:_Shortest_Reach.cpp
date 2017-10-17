#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
using namespace std;
class Graph
    {
    int v;
   // void BFSUtil();
    list<int>* adj;
    public:
       Graph(int v);
       void addEdge(int src,int dest);
       void BFS(int s,int* ans);
};
Graph::Graph(int v)
    {
    this->v=v;
    adj=new list<int>[v];
}

void Graph::addEdge(int src,int dest)
    {
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

void Graph::BFS(int s,int* arr)
    {
    bool* visited=new bool[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    list<int> que;
    visited[s]=true;
    que.push_back(s);
    int temp=0;
    list<int>:: iterator it;
    while(!que.empty())
        {
        s=que.front();
       // arr[s]=temp;
        que.pop_front();
        for(it=adj[s].begin();it!=adj[s].end();++it)
            {
            if(!visited[*it])
                {
                visited[*it]=true;
                que.push_back(*it);
                 arr[*it]=arr[s]+6;
            }
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int n,m;
        cin>>n>>m;
        int* arr=new int[n+1];
        for(int i=0;i<=n;i++)
            arr[i]=0;
        Graph g(n+1);
        for(int i=0;i<m;i++)
            {
            int src,dest;
            cin>>src>>dest;
            g.addEdge(src,dest);
        }
        int s;
        cin>>s;
        g.BFS(s,arr);
        for(int i=1;i<=n;i++)
            {
            if((i)!=s)
                {
                if(arr[i]==0)
                    cout<<-1<<" ";
                else
                    cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}