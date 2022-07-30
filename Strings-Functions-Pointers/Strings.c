#include <stdio.h>
#include <string.h>
int main(){
    /*char str_name[str_len] = "string"; */~
    char str1[6]="hello"; 
        /*When you provide a string literal to initialize the string, the compiler automatically adds a NULL character '\0' to the char array.
        For this reason, you must declare the array size to be at least one character longer than the expected string length.
        The statements below creates strings that include the NULL character.*/
    char str2[ ]="world";
        /*
        If the declaration does not include a char array size,
        it will be calculated based on the string length at initialization plus one for '\0':
        */ 

    //a string can also be declared as a set of characters
    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; //size 6

    /*To safely and conveniently operate with strings, you can use the Standard
    Library string functions shown below. Don't forget to include <string.h>.
    strlen() - get length of a string
    strcat() - merge two strings
    strcpy() - copy one string to another
    strlwr() - convert string to lower case
    strupr() - convert string to upper case
    strrev() - reverse string
    strcmp() - compare two strings*/

    //string input ->  scanf(), gets(), and fgets() functions.
    //scanf() - used to read input according to the format specifiers.
    char first_name[25];
    int age;
    printf("Enter your first name and age: \n");
    scanf ("%s %d", first_name, &age);
    //string output ->  fputs(), puts(), and printf() functions.
    char city[40];
    printf("Enter your favorite city: ");
    gets(city);
    //for safety, use fgets(city, 40, stdin)
    fputs(city, stdout);
    printf(" is a fun city");
    return 0;
}