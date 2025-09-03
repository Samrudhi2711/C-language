#include<stdio.h>
//enum

enum   week{sun=1,mon,tue,wed,thus,fri,sat}; //user defiend type , internally enum is int
//bydefault  1   2   3    4   5   6     7
int main()
{
    enum week day=1; 

    printf("\n day= %d",day);//1
    printf("\n size of enum week variable day= %d",sizeof(day));//4 byte
}
