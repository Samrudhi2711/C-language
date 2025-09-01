#include<stdio.h>
//ternary op  ? :  (It is used to check the condition)
int main()
{
    int num1=10;
    int num2=20;
    //Q. Find out the largest number outof num1 and  num2?

    // ternary operator
    //opearand1? opearand2 : opearand3
    //condition ?true part : false part
    //10 > 20 => false =>0
    num1>num2? printf("num1 is the largest number...!") : printf("num2 is the largest number...!");
   // opearand1?             opearand2                   :         opearand3


   int res=-10? printf("\n true part"): printf("\n false part");
   
   //-10 is non zero value which is cosidered as 1(true) 
   // so true part will be selected  
   printf("\n res=%d",res);//11
}
