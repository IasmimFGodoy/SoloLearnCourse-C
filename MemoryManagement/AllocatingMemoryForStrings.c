#include <stdio.h>

int main(){
    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");
    str = malloc(strlen(str20)+1);
    strcpy(str, str20);
    printf("%s", str);
    return 0;
}