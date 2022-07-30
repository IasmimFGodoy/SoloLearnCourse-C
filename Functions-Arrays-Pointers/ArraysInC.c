#include <stdio.h>
int main(){
    int test_scores[25]; //an array size 25
    float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99}; //initializing when it is declared
        //an array can be partially initialized, as in:
            //float prices[5] = {3.2, 5.55};
                //missing values are set to 0.
    int x[5] = {20 /*position 0*/, 45 /*position 1*/, 16 /*position 2*/, 18 /*position 3*/, 22}/*position 4*/;
    //accessing array elements
    x[1] = 260; //changing array position value
    printf("The second element of X is %d\n", x[1]);
    printf("The first element of prices is %.2f\n", prices[0]);
    printf("The last element of test_scores is %d\n", test_scores[25]);
}