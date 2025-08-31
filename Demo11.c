#include<stdio.h>

//how twisters are formed
int main()
{

    int num1,num2,num3;

    printf("\n Enter the value for num1 num2 num3=");
    int a= scanf("%d%d%d",&num1,&num2,&num3);

    printf("\n a=%d",a);//a=3

    int b=scanf("%d%d",&num1,&num2);
    printf("\n b=%d",b);//b=2
   // Note:scanf() returns the number how many variable value it has inputed.
   
   printf("\n result=%c",'A'+b);//result => 67 
                        //65+2 => 67 => ASCII value of  => C

}