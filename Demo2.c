#include<stdio.h>
//long
int main()
{

    long int rollNo=123;
    printf("\n size of long int rollNo=%d",sizeof(rollNo));//4 byte
    long abc;
    printf("\n size of long abc=%d",sizeof(abc));//4 byte
    //===========================================================

    long long pqr=123;
    printf("\n size of long long pqr=%d",sizeof(pqr));

    long double dvar=123.3;
    printf("\n size of long double dvar=%d",sizeof(dvar));

    //long float fvar;//not ok


}