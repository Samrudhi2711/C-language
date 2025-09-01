#include<stdio.h>
//unary operator
//preincrement
int main()
{

    int num1=10;
    int res;
    res=++num1;

    /*
        paper work
        //preincrement operator
         res=++num1;
        step1:  ++num1;
            num1=num1+1
                =10+1
            num1= 11
        step 2:
            res=num1;
            res=11;

         step 1: 
                perform the increment operation 1st and then perform the other
                operation (here other operation is assignment)
        step 2: now after increwment opeartion perform other operation(here assignment
                opeartion).
    
    */
    printf("\n num1=%d",num1);// 11
    printf("\n res=%d",res);//11
}