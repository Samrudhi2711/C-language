#include<stdio.h>

//bitwise NOT ~
int main()
{

    char res;
    res=~10;
    printf("res=%d",res);//-11
    /*
            //bitwise NOT ~
         
         step1: convert the number into its eqv binary number
         step2: perform the given bitwise operation(NOT ~)

        
         step1: 
            10 bin=> 0000 1010
         step2:   
                invert the numbers 
                     0000 1010 
                               ~
                     1111 0101
                when MSB of obtained binary is 1 then output is "-ve" and in such case 
                you need to perform when MSB of obtained binary is 0 then output is "+ve" 
                and in such case you need not to perform
        step3: take 2's complement of obtained binary in step2(result)

                    To find the 2's complement
                    i. take 1's complement
                    ii. add 1 in to the output of step i

                    i. 
                        1111 0101

                        0000 1010 1's complement
                    ii. 
                        0000 1010
                                1
                        ----------
                        0000 1011 =>-11


    
    */

}