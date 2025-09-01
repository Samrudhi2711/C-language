#include<stdio.h>
//shorthand op
int main()
{

    int res=10;
    res+=5;
    /*
        shorthand op
        res+=5;
        res=res+5;
        step1:
            res+5
            10+5=15
        step1:  
            add the lhs with rhs
            lhs=result
            res=15
        tep2:
            store the result in to lhs
    */
    printf("\nres+=5 res=%d",res);//15
    res=10;
    res-=4;//shorthand decrement//6
    /*  

        res-=4;
        res=res-4;
        step1 :
            res-4
            10-4
            =6
        step2:
            res=6;
    
    */
    printf("\nres-=4 res=%d",res);

    res=10;

    res*=2;
    /*

        res*=2;
          step1:
                res*2
                10*2
                20
        step 2:
            res=20
         
    */
    printf("\n res=%d",res);//20

    
}