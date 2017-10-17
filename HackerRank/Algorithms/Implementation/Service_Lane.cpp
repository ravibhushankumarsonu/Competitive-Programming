#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n, t;
	cin >> n >> t;
		int width[n];
		for (int i = 0; i < n; i++)
			cin >> width[i];
		while (t--)
		{
			int enter, exit;
			cin >> enter >> exit;
			int n = width[enter];
			for (int m = enter; m <= exit; m++)
			{
				if (n > width[m])
					n = width[m];
			}
			cout << n << endl;
		}
	return 0;
}