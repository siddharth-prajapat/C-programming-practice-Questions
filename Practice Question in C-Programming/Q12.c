
/*WAP to input a number and its power from user and find the power of the given number
using POW function.  */
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    printf("Enter a Number :- ");
    scanf("%d",&a);
    b=pow(a,3);
    printf("\nPower of the number :- %d\n",b);

}//pow ko hmesa pow(a,2) ese declayre karte hai.
