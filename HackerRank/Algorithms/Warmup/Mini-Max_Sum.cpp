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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    int arr[5];
    long int sum=0;
    for(int i=0;i<5;i++)
        {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+5);
    cout<<(sum-arr[4])<<" "<<(sum-arr[0])<<endl;
    return 0;
}