#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int *elements;
    int size;
    int cap;
} dyn_array;
dyn_array arr;
int main(){
    /* initialize array */
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; /* room for 1 element */
    
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5; /*increase capacity*/
    if (arr.size < arr.cap){
        arr.elements[arr.size] = 50;
        arr.size++;
    } else {
        printf("Need to expand the array");
    }
    return 0;
}

/*The entire program is written in main() for demonstration purposes.
To properly implement a dynamic array, sub-tasks should be broken down
into functions such as init_array(), increase_array(), add_element(),
and display_array(). The error checking was also skipped to keep the demo short.*/