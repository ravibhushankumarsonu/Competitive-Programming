#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,n,k,cnt=0,c=0;
    scanf("%d",&n);
    char str[n][100];
    int b[n][26];
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        b[i][j]=0;
    }
    for(i=0;i<n;i++)
        {
       // fflush(stdin);
        scanf("%s",str[i]);
        for(j=0;j<strlen(str[i]);j++)
            {
           b[i][(str[i][j])-97]=1;       
        }
       }
        i=0;
        for(j=0;j<26;j++)
        {
            cnt=0;
            for(k=1;k<n;k++)
            {
              if(b[i][j]!=0)
              {
               if((b[i][j]==b[k][j]))
                    cnt++;
              }
            }
           if(cnt==n-1)
           {
                c++;
           }
    }
    printf("%d",c);
    return 0;
}