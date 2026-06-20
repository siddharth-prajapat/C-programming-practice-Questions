

/*WAP to input three numbers and find maximum number using conditional operator.  */
#include<stdio.h>
void main()
{
    int m,a,b,c;
    printf("Enter the number of A :-");
    scanf("%d",&a);
    printf("Enter the number of B :-");
    scanf("%d",&b);
    printf("Enter the number of C :-");
    scanf("%d",&c);


    if (a>b && a>c){
        printf("Max Number is A %d\n",a);

    }
     else if( (b>a) && (b>c)) {
        printf("Max Number is B %d\n",b);

    }
       else if (c>a && c>b){
        printf("Max Number is C %d\n",c);

    }


}
