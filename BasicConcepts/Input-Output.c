#include <stdio.h>
int main(){
    char a = getchar();
    printf("You entered: %c", a);

    return 0;
}

/*
#include <stdio.h>
int main(){
    char a[100];

    gets(a);

    printf("You entered: %s", a);

    return 0;
}
*/

/*
#include <stdio.h>
int main(){
    int a, b;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nSum: %d", a+b);

    return 0;
}
*/