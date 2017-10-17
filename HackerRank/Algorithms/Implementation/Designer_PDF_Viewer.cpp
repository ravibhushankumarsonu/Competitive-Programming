#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include<string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[26];
    for(int i=0;i<26;i++)
        {
        cin>>arr[i];
    }
    string str;
    cin>>str;
    int h=0;
    for(int i=0;i<str.length();i++)
        {
        if(arr[str[i]-97]>h)
            h=arr[str[i]-97];
    }
    cout<<(h*str.length())<<endl;
    return 0;
}
