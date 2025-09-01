#include<stdio.h>
//example of logical OR ||
int main()
{

    int num1=0,num2=20;

    int res=num1++ || ++num2;
    //       0     ||  21 =>1
    //num1++=> 1
    printf("\n res=%d",res);//1
    printf("\n num1=%d",num1);//1
    printf("\n num2=%d",num2);//21 

    num1=10,num2=20;
        //    LHS       RHS
    int res=num1++ || ++num2;
    //       10   || 
    //  num1++=11
   // when logical OR || having non zero value in LHS then 
    //it's RHS will not be executed and result will be 1
    printf("\n res=%d",res);//1
    printf("\n num1=%d",num1);//11
    printf("\n num2=%d",num2);//20
}