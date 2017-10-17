#include <cmath>
#include <cstdio>
#include <vector>
#include<stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100000];
int ans[100000][2];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		
		int n;
		cin >> n;
        for(int i=0;i<100000;i++)
            {
            ans[i][0]=ans[i][1]=0;
        }
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 1; i < n; i++)
		{
			ans[i][0] = max(ans[i - 1][0], ans[i - 1][1] + abs(arr[i - 1] - 1));
			ans[i][1] = max(ans[i - 1][0] + abs(arr[i] - 1), ans[i - 1][1]);
		}
		cout << max(ans[n - 1][0], ans[n - 1][1]) << endl;
	}
	return 0;
}