#include <stdio.h>
/*#include “myutil.h” 
A user-defined header file is also given the .h extension,
but is referred to with quotation marks, as in "myutil.h".*/
#define PI 3.14
#define AREA(r) (PI*r*r)

int main(){
    float radius = 2;
    printf("%3.2f\n", PI);
    printf("Area is %5.2f\n", AREA(radius));
    printf("Area with radius + 1: %5.2f\n", AREA(radius+1));
    return 0;
}

/*
Some useful C libraries are:
stdio input/output functions, including printf and file operations.
stdlib memory management and other utilities
string functions for handling strings
errno errno global variable and error code macros
math common mathematical functions
time time/date utilities
*/