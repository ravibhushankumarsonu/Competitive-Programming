#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (s[i] == '1'&&s[i - 1] == '0'&&s[i + 1] == '0')
		{
			s[i - 1] = '1';
			s[i + 1] = '1';
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}