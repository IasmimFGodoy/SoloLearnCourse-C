#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr = malloc(10 * sizeof(*ptr));
    if(ptr != NULL)
        *(ptr + 2) = 50; /* assign 50 t0 third int */
    printf("%d\n", *(ptr + 2));

    free(ptr);
    return 0;
}
/*
The free() function is a memory management function that is called to release memory. By freeing, you make more
available for use later in your program.
*/