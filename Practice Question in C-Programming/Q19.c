
/*WAP to input week numbers from user and print in words using switch case statement.  */
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a Week Number 1-7 :- ");
    scanf("%d",&a);
    switch(a){
        case 1 :printf("Monday\n");
        break;
        case 2 :printf("Tuseday\n");
        break;
        case 3 :printf("Wednesday\n");
        break;
        case 4 :printf("Thrusday\n");
        break;
        case 5 :printf("Friday\n");
        break;
        case 6 :printf("Saturday\n");
        break;
        case 7 :printf("Sunday\n");
        break;

    }
}
