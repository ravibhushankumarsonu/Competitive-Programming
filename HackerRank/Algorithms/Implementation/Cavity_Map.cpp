#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    int n; 
    char arr[100][100] = {0,};
    int i, j;
 
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s", &arr[i]);
    }
 
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
                printf("%c", arr[i][j]);
            }
            else if (arr[i][j] > arr[i - 1][j] && arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j])
                printf("X");
            else
                printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}