#include <stdio.h>

#define LEVEL 4
int main(){
    #if LEVE > 6
        /* do something */
    #elif LEVEL > 5
        /* else if branch */
    #else
        /* last option here */
    #endif

    #if !defined(LEVEL)
        /* statements */
    #endif
    return 0;
}