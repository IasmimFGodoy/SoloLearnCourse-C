// a void pointer is used to refer to any address type in memory and has a declaration that looks like: void *ptr
#include <stdio.h>
int main(){
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf("void prt points to %d\n", *((int *)ptr));
    ptr = &y;
    printf("void prt points to %.1f\n", *((float *)ptr));
    ptr = &c;
    printf("void prt points to %c\n", *((char *)ptr));
    return 0;
}