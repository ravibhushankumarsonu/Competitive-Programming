#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
       if(k==0)
           {
           for(int i=1;i<=n;i++)
               cout<<i<<" ";
           cout<<endl;
           continue;
       }
            if(n%(2*k)!=0)
            {
            cout<<-1<<endl;
            continue;
        }
       
         int   g=n/(2*k);
        vector<int>arr;
        int temp=1;
        for(int i=1;i<=g;i++)
            {
            for(int j=1;j<=k;j++)
               {
                 arr.push_back(temp+k);
                temp++;
            }
            for(int j=k;j>=1;j--)
                {
                arr.push_back(temp-k);
                temp++;
            }
        }
        for(int i=0;i<arr.size();i++)
            {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
