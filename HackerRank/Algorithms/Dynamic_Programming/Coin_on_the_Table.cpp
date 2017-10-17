#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<cstring>
#include <algorithm>
using namespace std;




char grid[52][52];
int sol[52][52][1001];
int n, m, k;

void solve(int row, int col, int time, int val)
{
	if (row < 0 || row >= n) return;
	if (col < 0 || col >= m) return;
	if (time > k) return;

	if (val < sol[row][col][time] || sol[row][col][time] == -1)
	{
		sol[row][col][time] = val;

		if (grid[row][col] != '*')
		{
			solve(row, col + 1, time + 1, val + (grid[row][col] != 'R'));
			solve(row, col - 1, time + 1, val + (grid[row][col] != 'L'));
			solve(row - 1, col, time + 1, val + (grid[row][col] != 'U'));
			solve(row + 1, col, time + 1, val + (grid[row][col] != 'D'));
		}
		else
		{
			solve(row, col, time + 1, val);
		}
	}
}

int main()
{
	cin >> n >> m >> k;
	int r, c;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> grid[i][j];
			if (grid[i][j] == '*')
				r = i, c = j;
		}
	memset(sol, -1, sizeof(sol));
	solve(0, 0, 0, 0);
	cout << sol[r][c][k] << endl;
	return 0;
}