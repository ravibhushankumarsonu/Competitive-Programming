/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/385/B
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>
#include<string.h>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    char s[5001];
    while(scanf("%s",&s)==1)
    {
        int ans=0;
        int sz=strlen(s);
        for(int i=0;i<sz-3;++i)
        {
            for(int j=i;j<sz-3;++j)
                if(s[j]=='b'&&s[j+1]=='e'&&s[j+2]=='a'&&s[j+3]=='r')
                {
                    ans+=(sz-j-3);
                    break;
                }
        }
        printf("%d\n",ans);
    }
	return 0;
}