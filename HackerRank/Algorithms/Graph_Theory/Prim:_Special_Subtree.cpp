#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<limits>
#include<queue>
#define INT_MAX 2147483647
using namespace std;

class Graph {
	int V;
	list<pair<int, int >> *arr;
	int minKey(int* key, bool* mSet);
public:
	Graph(int V);
	void addEdge(int u, int v, int w);
	void primeMST(int s);
};
Graph::Graph(int V)
{
	this->V = V;
	arr = new list<pair<int, int>>[V];
}
void Graph::addEdge(int u, int v, int w)
{
	arr[u].push_back({ v,w });
	arr[v].push_back({ u,w });
}
int Graph::minKey(int* key, bool* mSet)
{
	int mi= INT_MAX;
	int index;
	for (int i = 0; i < V; i++)
	{
		if (mSet[i] == false && key[i] < mi)
		{
			mi = key[i];
			index = i;
		}
	}
	return index;
}
void Graph::primeMST(int s)
{
	int* parent=new int[V];
	bool* mSet = new bool[V];
	int* key = new int[V];
	for (int i = 0; i < V; i++)
	{
		mSet[i] = false;
		key[i] = INT_MAX;
	}
	parent[s] = -1;
	key[s] = 0;
	queue<int>que;
	que.push(s);
	while (!que.empty())
	{
		que.pop();
		int u = minKey(key, mSet);
		mSet[u] = true;
		for (auto it = arr[u].begin(); it != arr[u].end(); ++it)
		{
			if (mSet[it->first] == false && key[it->first] > it->second)
			{
				key[it->first] = it->second;
				parent[it->first] = u;
				que.push(it->first);
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < V; i++)
	{
		if (key[i] != INT_MAX)
			sum += key[i];
	}
	cout << sum << endl;
}
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, m;
	cin >> n >> m;
	Graph g(n + 1);
	for (int i = 0; i < m; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		g.addEdge(u, v, w);
	}
	int s;
	cin >> s;
	g.primeMST(s);
	return 0;
}