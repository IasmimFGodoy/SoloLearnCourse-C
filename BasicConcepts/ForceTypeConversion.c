#include <stdio.h>
int main(){
    float average;
    int total = 23;
    int count = 4;

    average = (float) total / count;    /*average = 5.75*/
    // average = total / count; -> the result will be integer -> 5
    printf("%4.2f", average);
}