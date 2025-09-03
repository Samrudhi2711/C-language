#include<stdio.h>

//for loop : inifinity
// int main()
// {

//      //  step1     step2   step3
//     for(int i=0 ; i<10   ;  )
//     {

//         //body of for loop
//         printf("\n Hello Students...!");
//     }
// }
//=================================================

// int main()
// {

//      //  step1     step2   step3
//     for(int i=0 ;     ; i++ )
//     {

//         //body of for loop
//         printf("\n Hello Students...!");
//     }
// }
//===============================================

// int main()
// {

//      //  step1     step2   step3
//     for(int i=0 ; i<10     )
//     {

//         //body of for loop
//         printf("\n Hello Students...!");
//     }
// }
// Ans: compile time error
//======================================

int main()
 {
     int i;

     //  step1     step2   step3
     for(i=110 ; i<10  ; i++   );//0+1=>1+1=>2+1=>3....9+1=>10
     {

         //body of for loop
         printf("\n Hello Students...!");//printed only once
         printf("\n %d",i);//10
        
     }
 }
// o/p;
// Hello Students...!
// 10