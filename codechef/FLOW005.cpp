#include <iostream>

using namespace std;
long int NumberOfNotes(long int);

int main()
{
   long int T,i;
   cin>>T;
   for(i=0;i<T;i++)
   {
       long int N;
       cin>>N;
       cout<<NumberOfNotes(N)<<endl;
   }
   return 0;
}
long int NumberOfNotes(long int sum)
{
   int a,b,c,d,e,f,g,h,i,k;
   a=sum/100;
   b=sum%100;
   c=b/50;
   d=b%50;
   e=d/10;
   f=d%10;
   g=f/5;
   h=f%5;
   i=h/2;
   k=h%2;
   return a+c+e+g+i+k;
}