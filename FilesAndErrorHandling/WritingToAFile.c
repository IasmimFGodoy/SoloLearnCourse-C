#include <stdio.h>
int main(){
    FILE *fptr;
    char filename[50];
    printf("Enter the filename of the file to create: ");
    gets(filename);
    fptr = fopen(filename, "w");

    /*write to file*/
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of list", fptr);
    return 0;
}