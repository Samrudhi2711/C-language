#include<stdio.h>
//bitwise AND &
int main()
{

    int res;
    res=10&5;
    printf("\n res=10&5 res=%d",res);
    /*
        bitwise AND &
         res=10&5;

         step1: convert the number into its eqv binary number
         step2: perform the given bitwise operation
         
         step1:
            10 bin=> 0000 1010
            5 bin=>  0000 0101
        step2:
                10 bin=> 0000 1010
                &
                5 bin=>  0000 0101
                --------------------
                         0000 0000  => 0 dec

         */
}