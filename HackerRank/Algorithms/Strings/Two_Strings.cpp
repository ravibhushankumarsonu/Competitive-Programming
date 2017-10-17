#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
        {
        int sum=0;
        string a,b;
        cin>>a>>b;
        int a1[26]={0},b1[26]={0};
        for(int i=0;i<a.length();i++)
            a1[a[i]-'a']++;
        for(int i=0;i<b.length();i++)
            b1[b[i]-'a']++;
        
        for(int i=0;i<26;i++)
            {
            if(a1[i]!=0&&b1[i]!=0)
             {    sum=1;
            break;
             }
        }
        if(sum)
            cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}