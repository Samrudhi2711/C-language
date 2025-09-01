#include<stdio.h>

//logical OR ||
int main()
{

    int num1=10;
    int num2=20;

    int res;
    res = num1 || num2;
    printf("\n res = num1 || num2 res=%d",res);
        //LHS  || RHS
    res= 10>20 || 10!=10;
    //     0   ||  0  

    printf("\n res= 10>20 || 10!=10 res=%d",res);    


}