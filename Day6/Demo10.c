#include<stdio.h>

//do...while() loop : Exit controlled loop
int main()
{

    /*
        //     1. initialization of loop variable
    //     Range strt end range
    //      i=      0    9
    // 2.  modification of loop variable body of loop
            //     i++
    // 3.   termination condition against loop variable
    //      i < 10
    
    */

    int i=1;//     1. initialization of loop variable
    //in case of do while loop very 1st time controll will enter 
    //inside the body of loop without checking the termination condition
    do{ 
        //body of do ... while loop
        printf("\n %d",2*i);

      // 2. modification of loop variable body of loop
        i++;
    }while(i<=10);//3.termination condition against loop variable

}