#include<stdio.h>

//bitwise OR |
int main()
{

    int res;
    res=10|5;
    printf("\n res=%d",res);    
    /*
        bitwise OR |
        res=10|5;
          step1: convert the number into its eqv binary number
         step2: perform the given bitwise operation(OR |)

          step1:
            10 bin=> 0000 1010
            5 bin=>  0000 0101
        step2:
                10 bin=> 0000 1010
                |
                5 bin=>  0000 0101
                --------------------
                         0000 1111  => 15 dec
    */
}
