#include<stdio.h>
//switch case
int main()
{

    /*
        Print the day of week as per input of end user
       Menu
        A.Sun
        B.Mon
        t.Tue
        W.Wed
        T.Thus 
        F.Fri 
        s.Sat 
        Enter your choice
        //i/p=> S
        o/p Sun
        i/p=>T
        o/p Thus
    */
    printf("\n S.Sun\nM.Mon\nt.Tue\nW.Wed\nt.Thus\nF.Fri\ns.Sat");
    printf("\n Enter your choice");
    char ch;
    scanf("%c",&ch);//T
    switch(ch)//5
    {
        case 'A':
            printf("\n Sun");
            break;//jump stmt => use to seperate the cases in switch case
        case 'M':
            printf("\n Mon");
            break;
        case 't':
            printf("\n Tue");
            break;
        case 'W':
            printf("\n Wed");
            break;
        case 'T':
            printf("\n Thus");
            break;
        case 'F':
            printf("\n Fri");
            break;
        case 's':
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