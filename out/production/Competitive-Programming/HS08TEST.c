#include <stdio.h>
int main()
{
    int y;
    float k;
    scanf("%d %f",&y,&k);
    if(y%5==0)
    {
     if(k-(y+0.50)>=0)
     {
	 k=k-(y+0.50);
     printf("%f",k);
 }
 else
 printf("%f",k);
    }
    else
    printf("%f",k);
    return 0;
} 