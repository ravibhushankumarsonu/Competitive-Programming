/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
problem: https://www.codechef.com/DEC18B/problems/MAXEP 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;
int getMiddle(int a, int b) {
	return a+(b-a)/2;
}

int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    int n, c;
    cin >> n >> c;
    
    int last;
    int x = 1, verdict;
    bool flag = 0;
    while(1)
    {
        cout << "1 " << x << endl;
        cin >> verdict;
        if(flag)
        {
            if(verdict)
            {
                cout << "2" << endl;
                break;
            }
            else
            {
                int init = x;
                while(1)
                {
                    cout << "1 " << x << endl;
                    cin >> verdict;
                    if(verdict)
                    {
                        cout << "2" << endl;
                        if(x == init)
                            break;   
                        cout << "1 " << x - 1 << endl;
                        cin >> verdict;
                        if(verdict)
                        {
                            cout << "2" << endl;
                            x--;
                            break;
                        }
                        else
                            break;
                    }
                    else
                    {
                        if(x + 2 <= n)
                            x += 2;
                        else
                            x++;
                    }
                }
                break;
            }
        }
        if(verdict == 0)
        {
            if(x + 500 <= n)
            {
                x += 500; 
                last = 500;
            }
            else
            {
                last = (n - x);
                x += (n - x);
            }
        }
        else
        {
            cout << "2" << endl;
            if(x == 1)
                break;
            x -= (last - 1);
            flag = 1;
        }
    }
    cout << "3 " << x << endl;

    return 0;
}