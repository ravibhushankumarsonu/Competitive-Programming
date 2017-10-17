#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int ans = 0;
	int k=0;
	while( k<n)
	{
		//int low = arr[k];
        int j=k+1;
	    while(arr[j]-arr[k]<=4)
            {
            j++;
        }
        k=j;
        ans++;
	}
	cout << ans << endl;
	return 0;
}