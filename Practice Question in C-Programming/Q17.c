
/*WAP to input four numbers from user and find maximum number using else if ladder. */
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter Numbers :- ");
scanf("%d,%d,%d",&a,&b,&c);
if(a > b && a > c){
printf ( "grether than number is A :- %d",a);

}
else if (b > a && b > c){
printf ( "grether than number is B:- %d",b);

}
else{
printf ( "grether than number is c :- %d",c);

}

}
