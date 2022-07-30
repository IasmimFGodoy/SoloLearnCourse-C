#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    /* a block of 10 ints*/
    ptr = malloc(10 * sizeof(*ptr));

    if (ptr != NULL){
        *(ptr + 2) = 50; /* assign 50 to */
    }
    return 0;
}
/*
The allocated memory is contiguous and be treated as an array. Instead of using brackets []
 to refer to elements, pointer arithmetic is used to traverse the array. Uou are advised to use + to refer to array 
 to array elements. Using ++ or += changes the address stored by the pointer.

 If the allocation is unsucessful, NULL is returned. Because of this, you should include code to check for a NULL
 pointer.

 A simple two-simensional array requires (rows*columns)*sizeof(datatype) bytes of memory

*/