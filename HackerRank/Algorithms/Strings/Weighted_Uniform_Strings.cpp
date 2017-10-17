#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str;
    cin>>str;
    vector<int>arr(26,0);
    char prev=str[0];
    int temp=1;
    arr[str[0]-'a']=1;
    for(int i=1;i<str.length();i++)
        {
        if(str[i]==prev)
            {
            temp++;
            arr[str[i]-'a']=max(temp,arr[str[i]-'a']);
        }
        else
            {
            temp=1;
            arr[str[i]-'a']=max(temp,arr[str[i]-'a']);
            prev=str[i];
        }
    }
    /*for(int i=0;i<26;i++)
        {
        cout<<arr[i]<<" ";
    }*/
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
        {
        int temp;
        cin>>temp;
        bool ans=false;
        for(int j=1;j<=26;j++)
            {
            if(temp%j==0&&(arr[j-1]*j)>=temp)
                {
                ans=true;
                break;
            }
        }
        if(ans)
            {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}