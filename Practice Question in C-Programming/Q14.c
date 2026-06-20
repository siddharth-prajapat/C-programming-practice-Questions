
/*WAP to input a number and check number is greater than 22 or divisible by 5.   */
#include<stdio.h>
void main ()
{
    int a;
    printf("Enter a Number :- ");
    scanf("%d",&a);
    if ( a >= 22 ){
        printf("Number is Greater Than 22 \n");
    if(a % 5==0){//nested if
        printf("number is divisible by 5\n");
    }
    else{
        //printf("Number is not divisible by 3\n");
    }


    }



}

