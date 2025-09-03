#include<stdio.h>
//switch case
int main()
{

    /*
        Print the day of week as per input of end user
       Menu
        1.Sun
        2.Mon
        3.Tue
        4.Wed
        5.Thus 
        6.Fri 
        7.Sat 
        Enter your choice
        //i/p=> 1
        o/p Sun
        i/p=>5
        o/p Thus
    */
    printf("\n 1.Sun\n2.Mon\n3.Tue\n4.Wed\n5.Thus\n6.Fri\n7.Sat");
    printf("\n Enter your choice=");
    int ch;
    scanf("%d",&ch);//5
    switch(ch)//5
    {
        default:
            printf("\n Invalid input value...!");
            break;
        case 1:
            printf("\n Sun");
            break;//jump stmt => use to seperate the cases in switch case
        case 2:
            printf("\n Mon");
            break;
        case 3:
            printf("\n Tue");
            break;
        case 4:
            printf("\n Wed");
            break;
        case 5:
            printf("\n Thus");
            break;
        case 6:
            printf("\n Fri");
            break;
        case 7:
            printf("\n Sat");
            break;
        
    }
    // switch(value)
    // {
    //     case value;
    //         break;
    //     case value;
    //         break;
    //     case value; 
    //         break;
    // }

}
