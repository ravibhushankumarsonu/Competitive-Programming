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
    string s;
    cin >> s;

    int heavy(0);
    long long amount(0);
    for (size_t i = 4; i < s.length(); ++i)
    {
        if (s[i] == 'l')
        {
            if (s[i-4] == 'm' && s[i-3] == 'e' && s[i-2] == 't' && s[i-1] == 'a')
            {
                amount += heavy;
            }
        }
        else if (s[i-4] == 'h' && s[i-3] == 'e' && s[i-2] == 'a' && s[i-1] == 'v' && s[i] == 'y')
        {
            ++heavy;
        }
    }
    cout << amount << endl;
	return 0;
}