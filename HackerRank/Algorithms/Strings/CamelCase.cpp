#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	string s;
	cin >> s;
	int len = s.length();
	if (len == 0)
		cout << 0 << endl;
	else
	{
		int ans = 1;
		for (int i = 1; i < len; i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}