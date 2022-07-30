#include <stdio.h>
union val{
    int int_num;
    float fl_num;
    char str[20];
};
union val info;
union val *ptr = NULL;
int main(){
    ptr = &info;
    ptr->int_num = 10;
    printf("info.int_num is %d", info.int_num);
    
    return 0;
}