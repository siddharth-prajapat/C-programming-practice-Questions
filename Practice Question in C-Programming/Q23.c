
/*Vote aligable or not*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age --");
    scanf("%d",&a);
    if(a >= 18){
    printf("\n***You are Eligible to Vote***\n");
    }
    else {
        printf("\n***You are not Eligible to Vote***\n");
    }
}
