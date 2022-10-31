#include <iostream>

using namespace std;
void ispalindrome(int);
int main()
{
   int T;
   cin>>T;
   for(int i=0;i<T;i++)
   {
       int num;
       cin>>num;
       ispalindrome(num);
   }
   return 0;
}
void ispalindrome(int number)
{
   int temp=0;
   int x=number;
   while(number>0)
   {
       temp=temp*10+number%10;
       number/=10;
   }
   if(temp==x)
       cout<<"wins"<<endl;
   else
       cout<<"losses"<<endl;
}