#include<stdio.h>
//unary operator
//predecrement
int main()
{

    int num1=10;
    int res;
    res=--num1;//predecrement
    /*
    predecrement   paper work
        
        res=--num1;
        step1:
            --num1;
            num1=num1-1
                =10-1
            num1=9
        step 2:
                res=num1;
                res=9;
    `           
        step1: 
             perform the decrement operation 1st and then perform the other
                operation (here other operation is assignment)
        step2:  now after decrement opeartion perform other operation(here assignment
                opeartion).


    */

    printf("\n num1=%d",num1);//9
    printf("\n res=%d",res);//9

}