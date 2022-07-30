#include <stdio.h>
int main(){
    int n = 50;
    char m = 'x';
    if (n>0 && n<=100) //and
        printf("Range (1 - 100).\n");
    if (m == 'x' || m == 'X') //or
        printf("Roman numeral value 10.\n");
    if (n == 999 || (n>0 && n <= 100))// and + or
        printf("Input valid.\n");
    if (!(m == 'x' || m == 'X'))//not -> true = false; false = true; true = 0; false = 1;
        printf("Roman numeral is not 10.\n");
}