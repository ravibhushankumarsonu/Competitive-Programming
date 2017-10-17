#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    string str;
    cin>>str;
    int pre=0;
    int now=0;
    int ans=0;
    for(int i=0;i<str.length();i++)
        {
        if(str[i]=='U')
            {
            pre=now;
            now++;
        }
        else
            {
             pre=now;
            now--;
        }
        if(now>=0&&pre<0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}