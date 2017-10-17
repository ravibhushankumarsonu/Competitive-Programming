#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<cstring>
using namespace std;

bool sol(string str1,string str)
    {
    int j=0;
        for(int i=0;i<str1.length();i++)
            {
            if(str1[i]==str[j])
                {
                j++;
            }
            if(j==str.length())
                {
                return true;
            }
        }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
        {
        string str="hackerrank";
        string str1,temp="";
        cin>>str1;
        if(sol(str1,str))
            {
            cout<<"YES"<<endl;
        }
        else
            {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}