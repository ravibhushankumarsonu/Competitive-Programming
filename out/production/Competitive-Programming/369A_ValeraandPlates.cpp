/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	int n, m, k, type;
	int ans = 0;
	cin >> n >> m >> k;
	
	for(int i = 0; i < n; i++)
	{
		cin >> type;
		
		if (type == 1)
		{
			if (m == 0)
				ans++;
			else
				m--;
		}
		else
		{
			if (k != 0)
			{
				k--;
				continue;
			}	
			
			if (m != 0)
			{
				m--;
				continue;
			}
			
			ans++;
		}
	}
	
	cout << ans << endl;
    
	return 0;
}