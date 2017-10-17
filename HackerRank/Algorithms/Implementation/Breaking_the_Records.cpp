#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int low;
    cin>>low;
    int high=low;
    int cl=0;
    int ch=0;
    for(int i=1;i<n;i++)
        {
        int temp;
        cin>>temp;
        if(temp<low)
            {
            low=temp;
            cl++;
        }
        if(temp>high)
            {
            high=temp;
            ch++;
        }
    }
    cout<<ch<<" "<<cl<<endl;
    return 0;
}