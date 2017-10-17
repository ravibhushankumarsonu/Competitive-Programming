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
	cin >> n;;
	while (n--)
	{
		string s;
		cin >> s;
		int ans = 0;
		bool arr[26];
		for(int i=0;i<26;i++)
            arr[i]=false;
		for (int i = 0; i <s.length(); i ++)
		{
			if (arr[s[i] - 97] == false)
			{
				arr[s[i] - 97] = true;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}