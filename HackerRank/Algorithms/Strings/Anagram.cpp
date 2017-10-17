#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
        {
        string s;
        cin>>s;
        int c[26]={0},sum=0;
        int l=s.length();
        int mid;
        if(l&1)
            sum=-1;
        else
          { 
            mid=l/2;
        for(int i=0;i<mid;i++)
            c[s[i]-'a']++;
        for(int i=mid;i<l;i++)
           { if(c[s[i]-'a']!=0)
            c[s[i]-'a']--;
            else
            sum++;
           }
          }
            cout<<sum<<endl;
    }
    return 0;
}