#include <stdio.h>
int main(){
    int a[2][3] =  {//An array 2 x 3
        {3, 2, 6},
        {4, 5, 20}
    };
    /*Accessing Two-Dimensional Arrays*/
    printf("Element 3 is in row 2 is %d\n", a[1][2]); /*20*/
    a[1][2]=25;
    printf("Element 3 is in row 2 is %d\n", a[1][2]); /*25*/
    //using for loop to traverse a two-dimensional array:
    int k, j;
    /*display array contents*/
    for (k = 0; k < 2; k++){
        for (j = 0; j < 3; j++){
            printf(" %d", a[k][j]);
        }
        printf("\n")
    }
}