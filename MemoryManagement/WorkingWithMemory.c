#include <stdio.h>
int main(){
    int x;
    printf("%d", sizeof(x)); 

    /*An int variable is typically allocated 4 bytes when declared.*/
    int arr[10];
    printf("%d", sizeof(arr)); /* output: 40*/
    return 0;
}

/*The stdlib.h library includes memory management functions.
The statement #include<stdlib.h> at the top of your program gives you access to the following

malloc(bytes) Returns a pointer to a contiguous block of memory that is of size bytes

calloc(num_items, item_size) Returns a pointer to a contiguous block of memory that has num_items items,
each of size item_size bytes. Typically used for arrays, structures, and other derives data types.
The allocated memory is initialized to 0.

realloc(ptr, bytes) resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized

free(ptr) Releases the block of memory pointed to by ptr.

When you no longer need a block of allocated memory, use the function free()
to make the block available to be allocated again
*/