#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char  c[10];
    for(int i=0;i<10;i++)
        {
        scanf("%c",&c[i]);
    }
    int num=0;
  int  a=(c[0]-'0');
  int  b=(c[1]-'0');
        num=(a)*10+(b);
    if(c[8]=='P'&&num!=12)
        num+=12;
    else if(c[8]=='A'&&num==12)
        num=0;
        c[1]=num%10+48;
    c[0]=num/10+48;
    for(int i=0;i<8;i++)
        printf("%c",c[i]);
    printf("\n");
    return 0;
}