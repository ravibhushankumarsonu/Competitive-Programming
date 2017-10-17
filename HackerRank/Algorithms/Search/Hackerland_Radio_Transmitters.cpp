#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr.begin(),arr.end());
    int ans=0;
    int i=0;
    while(i<n){
        ans++;
        int l=arr[i]+k;
        while(i<n&&arr[i]<=l)i++;
        l=arr[--i]+k;
        while(i<n&&arr[i]<=l)i++;
    }
    printf("%d\n",ans);
    return 0;
}
