#include<stdio.h>
//scanf:- standared lib function, used to accept the value for variable from input console(screen)
int main()
{
    int num1;

    printf("Enter the value for num1 from terminal=");

    scanf("%d",&num1);
    //syntax=> scanf("format specifier",addressof variable);
    printf("\n num1=%d",num1);
    double dvar;
    printf("\nEnter the value for dvar from terminal=");
    scanf("%lf",&dvar);
    printf("\n dvar=%.2lf",dvar);

    char ch;
    printf("\nEnter the value for ch from terminal=");
    getchar();
    scanf("%c",&ch);
    printf("\n ch=%c",ch);



}