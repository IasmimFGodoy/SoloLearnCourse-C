#include <stdio.h>
int main(){
    struct course {
        int id;
        char title[40];
        float hours;
    };
    struct student{
        int age;
        int grade;
        char name[40];
    }
    /*declarations using Structures    
    struct student s1;
    struct student s2;
    */

    //a struct variable can also be initialized in the declaration by listing initial values in order inside curly braces
    struct student s1 = {24, 5, "John"};
    struct student s2 = {22, 5, "Iasmim"}

    //accessing structure members
    s1.age = 24;
    return 0;
}