#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include<cstring>
#include<map>
using namespace std;

typedef long long int lli;
int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	lli t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;

		lli n = str.length();

		map<string, lli>arr;

		for (lli i = 0; i<n; i++)
		{
			for (lli l = 1; i + l - 1<n; l++)
			{
				string temp = str.substr(i, l);
				sort(temp.begin(), temp.end());
				arr[temp]++;
			}
		}
		lli ans = 0;
		for (auto it = arr.begin(); it != arr.end(); it++)
		{
			//cout << it->second << " ";
			ans += ((it->second)*(it->second - 1)) / 2;
		}
		cout << ans << endl;
	}
	return 0;
}