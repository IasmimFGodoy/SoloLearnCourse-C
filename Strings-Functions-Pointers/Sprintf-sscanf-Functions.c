#include <stdio.h>
int main(){
    char info[100];
    char dept[ ] = "HR";
    int emp = 75;
    sprintf(info, "the %s dept has %d employees.", dept, emp);
    printf("%s\n", info);

    char info2[ ] = "Snoqualmie WA 131909";
    char city[50];
    char state[50];
    int population;
    sscanf(info2, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.", population, city, state);
    return 0;
}