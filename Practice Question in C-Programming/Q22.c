
/* WAP to input a number from user and print number is Armstrong or not using while loop.  */
#include<stdio.h>
#include<math.h>

void main()

{
    int a,orignal,n,b,v=0;
    printf("Enter a Number :- ");
    scanf("%d",&a);

    orignal = a;

    while(a != 0){
    b = a % 10;
    v = v + pow(b,3);
    a = a / 10;
    }
    if( v == orignal){
        printf("The number is armstrong\n");
    }
    else {
        printf("This is not Armstrong number\n");
    }


}
