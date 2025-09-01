#include<stdio.h>
//nested if
int main()
{

   
    
    //syntax
    // if(condition)
    // {
    //     //true part
    // }
    // else
    // {
    //     //false part
    // }
    int num1=30;
    int num2=35;
    int num3=40;
    //find the largest outof num1 , num2 and num3
    if(num1>num2)//30>35=> false=>0
    {
        //body of if stmt
        //true part
        //nested if
        if(num1>num3)//30>40 => false =>0
        {
            //true part
            printf("\n num1 is the largest number...!");
        }
        else
        {
            //false part
            printf("\n num3 is the largest number...!");
        }
    }
    else
    {
        //false part
        //nested if
        if(num2>num3)//35>40 =>false =>0
        {
            //true part
            printf("\n num2 is the largest number...!");
        }
        else
        {
            //false part
            printf("num3 is the largest number...!");
        }
    }

}