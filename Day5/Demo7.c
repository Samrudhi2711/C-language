#include<stdio.h>
//example of logical AND &&
int main()
{

    int num1=0,num2=20;
    int res= num1++ && ++num2;
    //when in logical AND && if LHS is 0 or false
    //then it's RHS will not be executed and the 
    //output will 0
    printf("\n res=%d",res);//0
    printf("\n num1=%d",num1);//1
    printf("\n num2=%d",num2);//20

    num1=-1,num2=20;
    res= num1++ && ++num2;
     //   -1    &&  21  => 1
     //num1++=> 0
    printf("\n\n res=%d",res);//1
    printf("\n num1=%d",num1);//0
    printf("\n num2=%d",num2);//21


}