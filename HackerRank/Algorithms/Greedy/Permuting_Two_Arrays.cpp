#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int q;
	cin >> q;
	while (q--)
	{
		int n, k;
		cin >> n >> k;
		int* arr1 = new int[n];
		int* arr2 = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> arr2[i];
		}
		sort(arr1, arr1 + n);
		sort(arr2, arr2 + n);
		bool ans = true;
		for (int i = 0; i < n; i++)
		{
			if (arr1[i] + arr2[n - 1 - i] < k)
			{
				ans = false;
				break;
			}
		}
		if (ans == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
