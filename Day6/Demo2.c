#include<stdio.h>
//enum

// enum   week{sun,mon,tue,wed,thus,fri,sat}; //user defiend type , internally enum is int
// //bydefault  0   1   2   3    4   5   6  

// enum   week{sun=1,mon,tue,wed,thus,fri,sat};
// //                 2   3   4   5    6   7  

// enum   week{sun,mon,tue,wed=1,thus,fri,sat};//enum allows duplicate element values but in such if your
// //using combination of emun and switch case for duplicate element switch will show an error
// //           0  1    2    1     2   3   4     
int main()
{

    enum   week{sun=1,mon,tue,wed,thus,fri,sat}; //user defiend type , internally enum is int
    //bydefault   1   2   3    4   5   6    7
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
    enum week ch; //ch is variable of data type enum week
    scanf("%d",&ch);//5
    switch(ch)//5
    {
        default:
            printf("\n Invalid input value...!");
            break;
        case sun://5==1

            printf("\n Sun");
            break;//jump stmt => use to seperate the cases in switch case
        case mon://5==2
            printf("\n Mon");
            break;
        case tue://5==3
            printf("\n Tue");
            break;
        case wed://5==4
            printf("\n Wed");
            break;
        case thus://5==5
            printf("\n Thus");
            break;
        case fri:
            printf("\n Fri");
            break;
        case sat:
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