#include <stdio.h>
#include <string.h>
int main(){
    char s1[ ] = "The grey fox";
    char s2[ ] = " jumped. ";

    strcat(s1, s2);//concatenates str2 to the end of str1 and returns a pointer do str1
    printf("%s\n", s1);
    printf("Length of s1 is %d\n", strlen(s1)); //returns the length of the string stored in str, not including NULL character.
    strcpy(s1, s2);//copies str2 to str1. This function is useful for assigning a string a new value
    printf("s1 is now %s \n", s1);

    return 0;
    /*Additional string.h functions include:
    strncat(str1, str2, n) Appends (concatenates) first n characters of str2 to the end of str1 and returns a pointer to str1.
    strncpy(str1, str2, n) Copies the first n characters of str2 to str1.
    strcmp(str1, str2) Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
    strncmp(str1, str2, n) Returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
    strchr(str1, c) Returns a pointer to the first occurrence of char c in str1, or NULL if character not found.
    strrchr(str1, c) Searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found.
    strstr(str1, str2) Returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found.*/
}