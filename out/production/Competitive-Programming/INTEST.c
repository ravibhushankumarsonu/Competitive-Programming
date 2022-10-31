#include <stdio.h>

int main() 
{
   long int i,n,k,sum=0;
   scanf("%ld %ld",&n,&k);
   long int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%ld",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]%k==0)
       sum+=1;
       else
       continue;
   }
   printf("\n %ld",sum);
   return 0;
}