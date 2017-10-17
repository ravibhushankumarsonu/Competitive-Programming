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
    string s;
    cin >> s;
    long n;
    cin >> n;
    int len=s.length();
    int num=0;
    for(int i=0;i<len;i++)
        {
        if(s[i]=='a')
            {
            num++;
        }
    }
    long int k=n/len;
    long int r=n%len;
    int t=0;
      for(int i=0;i<r;i++)
        {
        if(s[i]=='a')
            {
            t++;
        }
    }
    long int ans=k*num+t;
    cout<<ans<<endl;
    return 0;
}
