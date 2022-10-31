/*
Author: Ravibhushan Kumar
College: IIT(ISM) Dhanbad
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
http://codeforces.com/problemset/problem/363/A
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007

using namespace std;

vector<int> digitize(long input){
    vector<int> output; 
    do{output.push_back(input%10); input /= 10;} while(input);
    return output;
}

void printDigit(int digit){
    if(digit < 5){printf("O-|");} else{printf("-O|"); digit -= 5;}
    for(int k = 0; k < digit; k++){printf("O");}
    printf("-");
    for(int k = 0; k < 4 - digit; k++){printf("O");}
    printf("\n");
}

int main(){

    long n(0); scanf("%ld", &n);
    vector<int> digits = digitize(n);
    for(int k = 0; k < digits.size(); k++){printDigit(digits[k]);}
    return 0;
}