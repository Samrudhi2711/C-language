#include<stdio.h>
//if...else if...else :-it will be used when you want to check the multiple conditions.
//Note: you can use the logical operator with this
int main()
{
    int num1=30;
    int num2=35;
    int num3=40;
                                //LHS  && RHS 
    if(num1>num2 && num1>num3 )//30>35 &&     => fales =>0 
    {
        printf("\n nun1 is the largest number...!");

    }
    else if(num2>num3)//35> 40 => false =>0
    {
        printf("\n num2 is the largest number...!");
    }
    else
    {
        printf("\n nume3 is the largest number...!");
    }

}