#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ,int* );
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
void insertionSort(int n, int*  arr) {
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
       int k;
       for(k=0;k<n;k++)
        printf("%d ",arr[k]);
       printf("\n");
   }
}