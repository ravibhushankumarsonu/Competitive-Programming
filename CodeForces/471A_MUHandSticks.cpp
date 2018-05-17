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
#include<set>

#define MOD 1000000007

using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
    vector<int> l(6);
	for (int i = 0 ; i < 6 ; i++) cin >> l[i];
	sort(l.begin(), l.end());
	
	if (l[0] == l[3]) cout << (l[4] == l[5] ? "Elephant" : "Bear");
	else if (l[1] == l[4]) cout << "Bear";
	else if (l[2] == l[5]) cout << (l[0] == l[1] ? "Elephant" : "Bear");
	else cout << "Alien";
	cout<<endl;
	return 0;
}