#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int size,int* ar);
int main(void) {

   int size;
scanf("%d", &size);
int ar[size], ar_i;
for(ar_i = 0; ar_i < size; ar_i++) {
   scanf("%d", &ar[ar_i]);
}

insertionSort(size, ar);

   return 0;
}
void insertionSort(int size, int*  ar) {
   int temp=ar[size-1];
    int n=size-2,i;
    while(n>=0&&ar[n]>temp)
        {
        ar[n+1]=ar[n];
    n=n-1;
    for( i=0;i<size;i++)
        {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
    ar[n+1]=temp;
for( i=0;i<size;i++)
        {
        printf("%d ",ar[i]);
    }
    printf("\n");

}