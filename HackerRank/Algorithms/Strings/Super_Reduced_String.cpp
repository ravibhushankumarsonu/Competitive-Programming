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
	vector<char>arr;
	for (int i = 0; i<s.length(); i++)
	{
		if (arr.empty())
			arr.push_back(s[i]);
		else if (arr.back() == s[i])
			arr.pop_back();
		else
			arr.push_back(s[i]);
	}
	if (arr.empty())
		cout << "Empty String" << endl;
	else
	{
		for (int i = 0; i < arr.size(); i++)
			cout << arr[i];
		cout << endl;
	}
	return 0;
}
