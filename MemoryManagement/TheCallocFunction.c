#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int num;
    char *info;
} record;

int main(){
    record *recs;
    int num_recs = 2;
    int k;
    char str[ ] = "This is information";

    recs = calloc(num_recs, sizeof(record));
    if (recs != NULL){
        for (k = 0; k < num_recs; k++){
            (recs+k)->num = k;
            (recs+k)->info = malloc(sizeof(str));
            strcpy((recs+k)->info, str);
        }
    }
    return 0;
}