#include<stdio.h>

//logical NOT !
int main()
{
    int num1=10;
    int res=!num1;
        //res= !num1
        //   =!10
        //   =0
    printf("\nint res=!num1 res=%d",res);//0

    res=!0;
    printf("\nres=!0 res=%d",res);//1
    /*

        Truth Table of Logical NOT !
        Logical NOT !
        i/p   O/p
         0     1
         1     0
    */
    res=!(!-10)? printf("\n true part"): printf("\n false part");
  //       0

}