#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int len = (int)str.size(), ans = 0;
		for (int i = 0, j = len - 1; i < j; i++, j--)
        {
            ans += abs((int)str[i] - (int)str[j]);
        }
		cout << ans << endl;
	}
	return 0;
}
