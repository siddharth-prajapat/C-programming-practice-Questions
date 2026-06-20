
/* WAP to print area of circle using #define.   *//*WAP= Write  a Program*/
#include<stdio.h>
#include<math.h>
#define pi 3.14159
void main()
{
    float b,a,r;
    printf("Enter the redius of the circle ::: ");
    scanf("%f",&b);
    r = pow(b,2);
    a = pi*r;
    printf("Area of the circle :- %f\n",a);
}
