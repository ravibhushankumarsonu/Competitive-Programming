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
    string input;
        cin>>input;
        string made=input.substr(0,1);
        bool at=false;
        for(int i=1;i<input.length();)
        {
                if(input.substr(i,3)=="dot"&&i+3!=input.length())
                        {
                                made=made+".";
                                i+=3;
                        }
                else if(input.substr(i,2)=="at"&&at==false&&i+2!=input.length())
                {
                        at=true;
                        made=made+"@";
                        i+=2;
                }
                else
                {
                        made=made+input.substr(i,1);
                        i++;
                }
        }
        cout<<made<<endl;
	return 0;
}