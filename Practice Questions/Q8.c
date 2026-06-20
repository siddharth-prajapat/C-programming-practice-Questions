#include<stdio.h>
void main()
{
    int a=5;
    int *p = &a;
    printf("%u\n",p);
    *p = 10;
    printf("%d\n",*p);


    //printf("%u\n",p);
    //(*p)++;
    //printf("%d",*p);

}
