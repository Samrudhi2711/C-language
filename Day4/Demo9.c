#include<stdio.h>
//relational op
int main()
{

    int num1=10;
    int num2=20;
   //10  < 20 => true => 1
   int res=num1<num2; //less than
   printf("\n res=num1<num2 => %d ",res);//1
      //10 > 20 => false => 0
   res=num1>num2;//greater than
   printf("\n res=num1>num2 => %d ",res);

   num1=10;
   num2=10;
    //  10>=10 => true => 1
   res=num1>=num2;//greayer than or equal to
   printf("\n res=num1>=num2 => %d ",res);
    //  10 != 10 => false => 0
   res=num1!=num2; //inequality
   printf("\n res=num1!=num2 => %d ",res);
    //  10  == 10 =>true => 1
    res=num1==num2; //equality
   printf("\n res=num1==num2 => %d ",res);

}