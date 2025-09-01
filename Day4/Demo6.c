#include<stdio.h>
//unary operator
//post increment
int main()
{
    int num1=10;
    int res;
    res=num1++;//post increment
    /*
        post increment papre work
         res=num1++;
         step1:
                res=num1;
                res=10;
         step2:
                num1++;
                num1=num1+1
                    =10+1
                num1=11;
        step 1:
                perform the other operation 1st (here assignment operation)
        step 2: 
                after performing other operation perform increment operation 

    */
    printf("\n num1=%d",num1);//11
    printf("\n res=%d",res);//10
}
