#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int answer=0;
       answer=n/c;  
     if(answer>=m)  
     {  
       int temp=answer;  
       do{  
         temp-=m;  
         answer++,temp++;  
       }while(temp>=m);  
     }  
        cout<<answer<<endl;
    }
    return 0;
}