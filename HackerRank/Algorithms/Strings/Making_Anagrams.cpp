#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    string a,b;
    cin>>a>>b;
   long int count1[26]= {0},count2[26]={0},sum=0;
    for(int i=0;i<a.length();i++)
        count1[a[i]-'a']++;
    for(int i=0;i<b.length();i++)
        count2[b[i]-'a']++;
    for(int i=0;i<26;i++)
        sum+=abs(count1[i]-count2[i]);
    cout<<sum<<endl;
    return 0;
}