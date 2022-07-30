/*int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //&num is the address of variable num.
    printf("%d\n", num);*/
#include <stdio.h>
void test(int k);
int main(){
        /*A memory address is given as a hexadecimal number. Hexadecimal, or hex, is a base-16 number system that uses digits 0 through 9 and letters A through F (16 characters) to represent a group of four binary digits that can have a value from 0 to 15.
        It's much easier to read a hex number that is 8 characters long for 32 bits of memory than to try to decipher 32 1s and 0s in binary.
        The following program displays the memory addresses for variables i and k*/
    int i = 0;
    printf("The address of i is %x\n", &i);
    test(i);
    printf("The address of i is %x\n", &i);
    test(i);

    return 0;
    
}
void test(int k){
    printf("The address of k is %x\n", &k);
}