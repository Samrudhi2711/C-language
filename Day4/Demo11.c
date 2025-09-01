#include<stdio.h>

//logical AND &&
int main()
{

    int num1=10;
    int num2=20;

    int res;
    res=10 && 20;//res=1 && 1=1
    printf("\n res=10 && 20 res=%d",res);

    res=-20 && 0;// res=1 && 0 =0
    
    printf("\n res=-20 && 0 res=%d",res);
}

