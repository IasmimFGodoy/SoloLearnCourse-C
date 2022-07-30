#include <stdio.h>
union val {
    int int_num;
    float fl_num;
    char str[20];
};

union val nums[10];
union type{
    int int_val;
    float f_val;
    char ch_val;
};
union type arr[3];
int main(){
    int k;
    int i;
    arr[0].int_val = 42;
    arr[1].f_val = 3.14;
    arr[3].ch_val = 'x';
    for (k = 0; k < 10; k++){
        nums[k].int_num = k;
    }

    for (k = 0; k < 10; k++){
        printf("%d ", nums[k].int_num);
    }

    for (i = 0; i < 3; i++){
        arr[i].int_val = i;
    }

    for (i = 0; i < 3; i++){
        printf("%d", arr[0]);
        printf("%f", arr[1]);
        printf("%s", arr[3]);
    }
    return 0;
}