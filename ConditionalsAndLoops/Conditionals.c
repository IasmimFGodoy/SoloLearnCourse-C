#include <stdio.h>
int main(){
    //there are six relational operators: <, <=, >, >=, ==, !=, all them return true or false

    int num = 41;
    num += 1;
    if (num == 42){
        printf("You won!");
    }

    //An expression that evaluates to a non-zero value is considered true.
    int in_stock = 20;
    if (in_stock)
    printf("\nOrder received.\n");
}