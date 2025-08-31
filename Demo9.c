#include<stdio.h>

//accepting value for multiple variables using single scanf()
int main()
{

    char ch;
    int num1;
    double dvar;
    //Q. Accept the value for ch num and dvar using single scanf statement?

    printf("\n Enter the value for ch num1 and dvar=");
    scanf("%c%d%lf",&ch,&num1,&dvar);
    printf("\n ch=%c , num1=%d, dvar=%.2lf",ch , num1, dvar);
}