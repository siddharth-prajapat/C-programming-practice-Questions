

/*WAP to demonstrate typedef & enum user define data types. */
#include<stdio.h>
typedef char gopal;
void main()
{
    gopal a,b,sum,mult,minus,divid;
    a=5;
    b=10;
    sum = a + b;
    mult = a * b;
    minus = a - b;
    divid = a / b;
printf("sum is :- %d\n",sum);
printf("minus is :- %d\n",minus);
printf("mult is :- %d\n",mult);
printf("divid is :- %d\n",divid);
}
