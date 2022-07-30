#include <stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("myfile.txt", "w");
    if(fptr == NULL){
        printf("Error opening file.");
        return -1;
    }
    fclose(fptr);
    return 0;
}

/*
r open for reading (file must exist)
w open for writing (file need not exist)
- a open for append (file need not exist)
- r+ open for reading and writing from beginning
- w+ open for reading and writing, overwriting file
- a+ open for reading and writing, appending to file
*/