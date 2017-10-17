#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int *a = (int*)malloc(sizeof(int));
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	int f = 0;
	do
	{
		int count = 0, small = 1000;
		f = 0;
		for (int i = 0; i<n; ++i)
		{
			if (a[i]>0 && a[i]<small)
				small = a[i];
		}
		for (int i = 0; i<n; ++i)
		{
			if (a[i] != 0)
			{
				a[i] = a[i] - small;
				++count;
				f = 1;
			}
		}
		if (count)
			cout << count << endl;
	} while (f == 1);
	return 0;
}