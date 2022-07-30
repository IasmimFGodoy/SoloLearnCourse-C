#include <stdio.h>
int main(){
    int profit = 2500;
    int clients = 20;
    int bonus;
    if (profit > 1000){
        if (clients > 15)
            bonus = 100;
    }
        else 
            bonus = 25;

    printf("%d", bonus);
}