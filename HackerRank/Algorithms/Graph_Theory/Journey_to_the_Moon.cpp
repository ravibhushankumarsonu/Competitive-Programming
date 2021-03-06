#include<iostream>
#include <algorithm>
#include <set>
#include <queue>
using namespace std;
  
int N,K,A,B,C[100000],NC;
set<int> G[100000];
  
queue<int> Q;
set<int>::iterator it;
long long colour(int root) {
    C[root] = ++NC;
    Q.push(root);
    long long result = 1;
    while(!Q.empty()) {
        int u = Q.front();
        Q.pop();
        for(it = G[u].begin(); it != G[u].end(); it++) {
            int v = *it;
            if(C[v]==0) {
                C[v] = NC;
                result++;
                Q.push(v);
            }
        }
    }
    return result;
}
  
int main() {
    cin >> N >> K;
    for(int i = 0; i < K; i++) {
        cin >> A >> B;
        G[A].insert(B);
        G[B].insert(A);
    }
    long long result = 0;
    long long sum = 0;
    for(int i = 0; i < N; i++)
        if(C[i]==0) {
            long long x = colour(i);
            result += sum*x;
            sum += x;
        }
    cout << result << endl;
}