#include <stdio.h>
int main(){
    float price = 6.50;
    int increase = 2;
    float new_price;

    new_price = price + increase;
    printf("New price is %4.2f", new_price);
}