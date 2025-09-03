#include<stdio.h>
//break and continue:jump statements
int main()
{

     for(int i=0;i<5;i++)
     {
         printf("\n Hello Sunbeam Pune");
         printf("\n Hello Sunbeam Karad");
         break;//it will terminate the loop
         printf("\n Hello Sunbeam Kolhapur\n");
     }

    /*for(int i=0;i<5;i++)
    {
        printf("\n Hello Sunbeam Pune");
        printf("\n Hello Sunbeam Karad");
        continue;
        //it will skip the statement after continue but will not terminate the loop
        printf("\n Hello Sunbeam Kolhapur\n");
    }*/
}