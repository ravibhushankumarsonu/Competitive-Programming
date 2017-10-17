#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<queue<string>>arr(100);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        int a;
        string s;
        cin>>a>>s;
        if(i<n/2)
            {
            arr[a].push("-");
        }
        else
            arr[a].push(s);
    }
    int i=0;
    int k=0;
    while(!arr.empty()&&i<100)
        {
        while(!arr[i].empty()&&k<n)
            {
            cout<<arr[i].front()<<" ";
            arr[i].pop();
            k++;
        }
        i++;
    }
    cout<<endl;
    return 0;
}
