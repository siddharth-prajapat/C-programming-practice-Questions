
/* WAP to input a number from user and check number is one, two or three digit using else if
ladder. */
#include<stdio.h>
void main()
{
int a;
printf ("Enter a Number :- ");
scanf("%d",&a);
if(a <= 9){
printf("Number is single digit\n");
}
else if (a > 9 && a <= 99){
printf("Number is Double digit\n");
}
else if (a > 99 && a <= 999){
printf("Number is Three digit\n");
}

}
