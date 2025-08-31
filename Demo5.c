#include<stdio.h>
//dec hex oct constant value
int main()
{

    int num1=12;//dec value
    printf("\ndec=> %d",num1);
    printf("\n oct num1=> %o",num1);//14
    printf("\n hex num1=> %x",num1);//'c'

    int num2=012;//oct value
    printf("\n oct to dec num2=%d",num2);//10
    printf("\n oct to hex num2=%x",num2);//'a'
    printf("\n oct to oct num2=%o",num2);//12

    int num3=0x12;//hex value
    printf("\n hex to dec=%d",num3);//18
    printf("\n hex to oct=%o",num3);//22
    printf("\n hex num3=%x",num3);//12

}