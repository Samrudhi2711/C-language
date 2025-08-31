#include<stdio.h>
//unsigned char range formulae
int main()
{
    unsigned char num1=256;
    printf("\n num1=%d",num1);//0
    num1=257;
    printf("\n num1=%d",num1);//1
    num1=258;
    printf("\n num1=%d",num1);//2

    /*
        Q. To find the range of unsiged char
            Paper Work
        unsigned char; 1byte=> 8 bit
        =2(res to the power 8) - 1
        =256-1
        =255
        range of unsiged char from 0 to 255
    */

    unsigned int num2=123;
    /*
        to find the range of unsigned int
        Paper work
        unsigned int;=> 4 byte => 4*8=> 32 bit;
        =2(res to the power 32) - 1
        =4,294,967,296 -1 
        =4,294,967,295
        range of unsigned int from 0 to 4,294,967,295

        
    */

}
