/*WAP to input three numbers from user and find maximum using nested if.  */

#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter number A :- ");
scanf("%d",&a);
 printf("Enter number B :- ");
 scanf("%d",&b);
  printf("Enter number C :- ");
   scanf("%d",&c);
   if(a > b){
    if(a > c){
        printf("Maximum Number is A :- %d",a);
    }
    else {
    printf("Maximum Number is B :- %d",b);
    }
   }
   if(c > b){//c > a && c > b ){
   printf("Maximum Number is C :- %d",c);
   }
   else {
     printf("Maximum Number is B :- %d",b);
   }

}
