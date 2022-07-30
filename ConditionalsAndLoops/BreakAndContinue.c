#include <stdio.h>
int main(){
    int num = 5;
    while (num > 0){
        if (num==3)
            break;
        printf("%d\n", num);
        num--;
    }
    while (num > 0){
        num--;
        if (num==3)
            continue;
        printf("%d\n", num);
    }
    return 0;
}