#include<stdio.h>
//signed char => range formulae
int main()
{

    signed char num1=128;//(-128 to 127)
    printf("\n num1=%d",num1);//-128
    num1=129;
    printf("\n num1=%d",num1);//-127
    num1=130;
    printf("\n num1=%d",num1);//-126


    /*
        To find the range of signed char

            Paper work
        signed char; => 1 byte => 8 bit

        =2 (resto the power 8-1) -1
        =2(resto the power 7) - 1;
        =128-1
        =127
        range of signed char from -128 to 127
                                                          2
    */

    /*
        To find the range of signed int 
        papers work
        signed int => 4 byte =>4*8=> 32 bit
        =2(res to the power 32-1) - 1
        = 2(res to the power 31) - 1
        =2,147,483,648-1
        =2,147,483,647
        range of signed int from -2,147,483,648 to 2,147,483,647

    */
}