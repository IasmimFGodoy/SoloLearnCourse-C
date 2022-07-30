#include <stdio.h>
#include <stdlib.h>
// #include <errno.h>

int main(){
    FILE *fptr;
    errno = 0;

    fptr = fopen("c:\\noneexistantfile.txt", "r");
    if(fptr == NULL){
        perror("Error");
        fprintf(stderr, "%s\n", sterror(errno));
        exit(EXIT_FAILURE);
    }

    for (x=0; x < 135; x++)
        fprintf(stderr, "%d: %s\n", x, strerror(x));
    return 0;
}