/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
url : http://codeforces.com/problemset/problem/31/A
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;


int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }

    bool found = false;
    for (int i = 1; !found && i <= n; ++i)
    {
        for (int j = 1; !found && j <= n; ++j)
        {
            if (j != i)
            {
                for (int k = j + 1; k <= n; ++k)
                {
                    if (k != i && a[i] == a[j] + a[k])
                    {
                        printf("%d %d %d\n", i, j, k);
                        found = true;
                        break;
                    }
                }
            }
        }
    }

    if (!found)
    {
        printf("-1\n");
    }

    return 0;
}