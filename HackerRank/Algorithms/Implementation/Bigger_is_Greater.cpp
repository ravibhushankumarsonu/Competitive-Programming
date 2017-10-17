#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#define MAX 100
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int t;  
    char s[MAX];  
    cin>>t;  
    while(t--)  
        {  
        cin>>s;  
        int len;  
        len=strlen(s);  
        //Rearrange the elements in the range (0,n) int the next lexi. greater permutation C++reference
        if(next_permutation(s,s+len))  
            cout<<s<<endl;  
        else  
            cout<<"no answer"<<endl;  
    } 
    return 0;
}