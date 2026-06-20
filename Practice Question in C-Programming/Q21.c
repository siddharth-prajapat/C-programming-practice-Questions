
/*WAP to input starting and ending limit from user and print all the numbers between limit
using do while loop.  */
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Starting limit :- ");
    scanf("%d",&a);
    printf("Enter Ending limit :- ");
    scanf("%d",&b);
    do{
           printf("%d\n",a);
            a++;

    }
    while(a<=b);

}

